#Holberton School - 0x14-file_io
File input, output and other manipulations.
## New commands / functions used:
``open``, ``close``, ``read``, ``write``, ``O_RDONLY``, ``O_WRONLY``, ``O_RDWR``, ``STDIN_FILENO`` 
## Helpful Links
* [Wikipedia on file descriptors](https://en.wikipedia.org/wiki/File_descriptor)
* [ShellWaveX - read, write, and close on Youtube](https://www.youtube.com/watch?v=dP3N8g7h8gY)
* [Understanding Linux open() system call](https://www.ibm.com/developerworks/community/blogs/58e72888-6340-46ac-b488-d31aa4058e9c/entry/understanding_linux_open_system_call?lang=en)

## Description of Files
<h6>0-read_textfile.c</h6>
Reads a text file and prints it to the POSTIX standard output
<h6>1-create_file.c</h6>
Writes a file with rw------- permissions. If no content is provided, creates an empty file.
<h6>2-append_text_to_file.c</h6>
Appends text to a file.
<h6>3-cp.c</h6>
Copies contents of one file into another
<h6>100-elf_header.c</h6>
Displays the info contained in the ELF header at the start of an ELF file. Only uses ``lseek`` once. Only uses ``read`` twice.If not an ELF file, or on any error, exit with a status code 98, and display a comprehensive error to STDERR.

Information displayed: 
* Magic
* Class
* Data
* Version
* OS/ABI
* ABI Version
* Type
* Entry point address
