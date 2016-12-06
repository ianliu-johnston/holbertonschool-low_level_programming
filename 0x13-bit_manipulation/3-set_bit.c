#include "holberton.h"
/**
  * set_bit - sets bit at index to 1
  * @n: pointer to number
  * @index: index to change
  * Return: 1 on success, -1 on failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return ((index > (8 * sizeof(*n)) - 1) ? -1 : 1);
}
