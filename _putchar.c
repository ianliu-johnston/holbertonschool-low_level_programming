#include <stdlib.h>
/**
  * _putchar - puts a char on the screen
  * @c: character to print
  * Return: call to function write
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
