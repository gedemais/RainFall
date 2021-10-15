# Rainfall

Ce projet est une introduction à l’exploitation de binaire (type elf).

level0:
--------------------------------------------------------------------------------
level0@RainFall:~$ ls -a
.  ..  .bash_logout  .bashrc  level0  .profile
level0@RainFall:~$ ./level0 bonjour
No !
level0@RainFall:~$ ./level0 .profile
No !
level0@RainFall:~$ ./level0
Segmentation fault (core dumped)
level0@RainFall:~$ gdb ./level0
GNU gdb (Ubuntu/Linaro 7.4-2012.04-0ubuntu2.1) 7.4-2012.04
Copyright (C) 2012 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "i686-linux-gnu".
For bug reporting instructions, please see:
<http://bugs.launchpad.net/gdb-linaro/>...
Reading symbols fro /home/user/level0/level0...(no debugging symbols found)...done.
(gdb) r
Starting program: /home/user/level0/level0

Program received signal SIGSEGV, Segmentation fault.
0x08049aff in ____strtol_l_internal ()
(gdb) disas main
Dump of assembler code for function main:
   0x08048ec0 <+0>:	push   %ebp
   0x08048ec1 <+1>:	mov    %esp,%ebp
   0x08048ec3 <+3>:	and    $0xfffffff0,%esp
   0x08048ec6 <+6>:	sub    $0x20,%esp
   0x08048ec9 <+9>:	mov    0xc(%ebp),%eax
   0x08048ecc <+12>:	add    $0x4,%eax
   0x08048ecf <+15>:	mov    (%eax),%eax
   0x08048ed1 <+17>:	mov    %eax,(%esp)
   0x08048ed4 <+20>:	call   0x8049710 <atoi>
   0x08048ed9 <+25>:	cmp    $0x1a7,%eaxm

   0x1a7 == 423

0x1a7 est une valeure comparee avec le retour de atoi, lui meme lance avec le
premier element de argv. Cette comparaison mene a un jump plus bas dans le code.

level0@RainFall:~$ ./level0 423
$ ls
ls: cannot open directory .: Permission denied
$ whoami
level1
$ id
uid=2030(level1) gid=2020(level0) groups=2030(level1),100(users),2020(level0)
$ cd ../
$ cd level1
$ ls
level1
$ ls -a
.  ..  .bash_logout  .bashrc  level1  .pass  .profile
$ cat .pass
1fe8a524fa4bec01ca4ea2a869af2a02260d4a7d5fe7e7c24d8617e6dca12d3a

--------------------------------------------------------------------------------

level1:
