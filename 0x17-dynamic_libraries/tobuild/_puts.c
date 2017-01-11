#include <unistd.h>
#include <stdio.h>

void _puts(char *s)
{
	unsigned int len = 0;

	for (len = 0; s[len]; len++)
		;
	len++;
	s[len] = '\n';
	write(STDOUT_FILENO, s, len + 1);
}
