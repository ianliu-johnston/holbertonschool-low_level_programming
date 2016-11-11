#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc
  * @b: size of buffer
  * Return: pointer to buffer
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b > 1)
	{
		p = malloc(b);
		if (p == NULL)
			return (98);
	}
	else
		return (98);
	return (p);
}
