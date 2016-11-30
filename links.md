# Additional Resources
This is a simple list of links to resources not directly related to the content in the directories, but I found helpful.

## C
* [Pragma](https://gcc.gnu.org/onlinedocs/cpp/Pragmas.html)

## Bash
* [Difference between TTY and the program called Terminal](http://unix.stackexchange.com/questions/4126/what-is-the-exact-difference-between-a-terminal-a-shell-a-tty-and-a-con)
* View headers of programs: ``View headers of programs: echo | gcc -E -xc -include 'string.h' -``

### Docker
* Delete all docker containers and images: ``docker rm $(docker ps -a -q)  && docker rmi $(docker images -q)``

## Vi / Vim
* [Vim Cheat Sheet](http://vimsheet.com/)
* [Surround vim plugin](http://www.catonmat.net/blog/vim-plugins-surround-vim/)
* [Macros](http://usevim.com/2012/08/10/macros/)
* [Practice movement + commands](https://www.shortcutfoo.com/app/dojos/vim)

## Git
* [Markdown Cheatsheet](https://guides.github.com/pdfs/markdown-cheatsheet-online.pdf) - Raw html mostly works also.

## Straight up Hacking
* [Poison Tap](https://samy.pl/poisontap/)
* [Fork Bomb](https://en.wikipedia.org/wiki/Fork_bomb) - ``:(){ :|:& };:`` DANGER!DANGER! This will crash your terminal if you don't have safeguards in place.
