#include <stdlib.h>
/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to the original memory block
  * @old_size: old size of memory block
  * @new_size: new size of memory block
  * Return: pointer to reallocated memory block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *castptr;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size * sizeof(char));
		castptr = ptr;
		for (i = 0; i < old_size; i++)
			p[i] = castptr[i];
		free(ptr);
		return (p);
	}
	return (ptr);
}
