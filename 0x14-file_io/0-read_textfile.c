#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: number of characters to print
  * Return: 0 on success
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total, read_status, flag;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	total = flag = 0;
	read_status = 1;
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);
	while (letters > BUFSIZE && read_status != 0)
	{
		read_status = read(txt_file, buffer, BUFSIZE);
		buffer[read_status] = '\0';
		write(STDIN_FILENO, buffer, read_status);
		flag = 1;
		total += read_status;
		letters -= BUFSIZE;
	}
	if (read_status < (int)letters || flag == 1)
		read_status = read(txt_file, buffer, letters);
	buffer[read_status] = '\0';
	write(STDIN_FILENO, buffer, read_status);
	total += read_status;
	close(txt_file);
	return (total);
}
