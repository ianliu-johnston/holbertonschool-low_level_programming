# Don't hate the hacker, hate the code

Create a program that generates random valid passwords for the program 101-crackme.

- You are allowed to use the standard library
- You don't have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
- man `srand`, `rand`, `time`
- `gdb` and `objdump` can help

```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x04$ ./101-crackme "`./101-keygen`"
Tada! Congrats
julien@ubuntu:~/0x04$ 
```
