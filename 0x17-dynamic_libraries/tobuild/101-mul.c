#include <unistd.h>
/**
  * mul - replacement for the main function call
  * @argc: argument count
  * @argv: 2D array of arguments
  * Return: return 0 on success, 98 on failure
  */
int mul(void)
{
	write(1, "You just hit a dummy function\n", 30);
	return (0);
}
