#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * get_op_func - decides which math to use based on the operator
  * @s: pointer to string
  * Return: result of the operation
  */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 6)
	{
		if (ops[i] == (opt_t)*s)
		{
			printf("I got a %s\n", s);
		}
		i++;
	}
	return (0);
}
