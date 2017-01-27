#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 2048
/**
  * input_buf - entry point
  * Return: 0 on success
  */
char *input_buf(int *fd_r, char *buf)
{
	int buffer_size = BUFSIZE;
	int offset = 0;
	int total, bytes_read;
	char *tmp_ptr;

	total = bytes_read = 1;
	while(bytes_read > 0)
	{
		bytes_read = read(fd_r, buf + offset, BUFSIZE);
		total += bytes_read;
		if (total + bytes_read >= buffer_size)
		{
			offset += BUFSIZE;
			buffer_size += BUFSIZE;
			tmp_ptr = realloc(buf, buffer_size * sizeof(char));
			if (tmp_ptr)
				buf = tmp_ptr;
			else
				exit(97);
		}
	}
	buf[total] = '\0';
	return (buf);
}
/**
  * main - entry point
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	char *buf;

	if (ac != 3)
		printf("Usage: %s <filepath>/to_hide <filepath>/picture.jpg\n", av[0]), exit(1);

	buf = malloc(BUFSIZE * sizeof(char));
	if (!buf)
		exit(97);

	file_r = open(av[1], O_RDONLY);
	if (file_r == -1)
		printf("Could Not Open."), exit(98);
	buf = input_buf(file_in, buf);
	if (!buf)
		exit(99);
	close(file_in);

	file_w = open(av[2], 0_WRONLY);
	close(file_w);
	free(buf);
	return (0);
}
