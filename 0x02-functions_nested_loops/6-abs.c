#include "holberton.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
