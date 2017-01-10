# Additional Resources
This is a simple list of links to resources not directly related to the content in the directories, but I found helpful.

## C
* [Pragma](https://gcc.gnu.org/onlinedocs/cpp/Pragmas.html)
* [Why to set your pointers to NULL after freeing malloced space](http://stackoverflow.com/questions/1025589/setting-variable-to-null-after-free/#1025604)
* [LD_PRELOAD environmental variable: Code injection with the dynamic linker](https://rafalcieslak.wordpress.com/2013/04/02/dynamic-linker-tricks-using-ld_preload-to-cheat-inject-features-and-investigate-programs/)

## Assembly
* [Modern x86 Assembly blogpost](http://t-a-w.blogspot.com/2007/03/modern-x86-assembly.html)

## Compilers
* [How libgc is loaded at runtime](http://dustin.schultz.io/blog/2010/10/02/how-is-glibc-loaded-at-runtime/)
* [PDF on the ELF format](http://www.skyfree.org/linux/references/ELF_Format.pdf)
* [PLT: Library calls and function calls from objdump](http://stackoverflow.com/questions/5469274/what-does-plt-mean-here)

## Linux
* [the /etc/shadow file](http://www.slashroot.in/how-are-passwords-stored-linux-understanding-hashing-shadow-utils)
* [Inodes on Unix youtube](https://www.youtube.com/watch?v=tMVj22EWg6A)

## Bash
* [Difference between TTY and the program called Terminal](http://unix.stackexchange.com/questions/4126/what-is-the-exact-difference-between-a-terminal-a-shell-a-tty-and-a-con)
* View headers of programs: ``View headers of programs: echo | gcc -E -xc -include 'string.h' -``
* Debugging tools: ``strace``, ``ltrace``, ``objdump``, ``gdb``, ``radare2``
* [COMMAND_PROMPT environmental variable](http://www.tldp.org/HOWTO/Bash-Prompt-HOWTO/x264.html)

### Docker
* Delete all docker containers and images: ``docker rm $(docker ps -a -q)  && docker rmi $(docker images -q)``

## Vi / Vim
* [Vim Cheat Sheet](http://vimsheet.com/)
* [Surround vim plugin](http://www.catonmat.net/blog/vim-plugins-surround-vim/)
* [Macros](http://usevim.com/2012/08/10/macros/)
* [Practice movement + commands](https://www.shortcutfoo.com/app/dojos/vim)

## Git
* [Markdown Cheatsheet](https://guides.github.com/pdfs/markdown-cheatsheet-online.pdf) - Raw html mostly works also.
* How to roll back a file to a previous commit: ``git checkout <hash> file.e

## Straight up Hacking
* [Poison Tap](https://samy.pl/poisontap/)
* [Samy Kamkar](https://samy.pl/)
* [Fork Bomb](https://en.wikipedia.org/wiki/Fork_bomb) - ``:(){ :|:& };:`` DANGER!DANGER! This will crash your terminal if you don't have safeguards in place.
