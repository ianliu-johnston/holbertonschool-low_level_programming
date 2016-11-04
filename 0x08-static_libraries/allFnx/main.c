#include "holberton.h"
#include <stdio.h>
int main(void)
{
	char *s1 = "My brain is an extension of my heart.";
	char *s2 = "I am a strange loop.";
	char *s3 = "019283";

	printf("\"%s\" is %d characters long.\n", s2, _strlen(s2));
	printf("%s plus 14 = %d\n", s3, _atoi(s3) + 14);
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
	return(0);
}
