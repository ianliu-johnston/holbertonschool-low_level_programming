#include "holberton.h"
/**
  * append_text_to_file - appends text to a file
  * @filename: file to append to, if NULL, return -1
  * @text_content: content to append, if NULL, do not append
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, len;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	write(append_file, text_content, len);
	close(append_file);
	return (1);
}
