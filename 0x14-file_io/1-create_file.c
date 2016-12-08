#include "holberton.h"
/**
  * create_file - creates a file with rw------- permissions
  * @filename: name of the file, if NULL, return -1
  * @text_content: contents of the file. If NULL, create an empty file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int new_file;
	int len;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	for (len = 0; text_content[len]; len++)
		;
	write(new_file, text_content, len);
	close(new_file);
	return (1);
}

