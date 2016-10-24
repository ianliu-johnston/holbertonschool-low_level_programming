#include <unistd.h>
/**
  * _putchar - writes char c to std out.
  * @c: char to print
  * Return: 1 on success.
  * on error, -1 is returned, and errno is set.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
