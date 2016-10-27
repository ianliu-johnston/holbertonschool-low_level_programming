#include <unistd.h>

/**
 * _putchar - puts a char
 *
 * Return: the character to write to stdout.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
