#include "3-calc.h"
/**
  * get_op_func - decides which math to use based on the operator
  * @s: pointer to string
  * @a: input value
  * @a: input value
  * Return: result of the operation
  */
int (*get_op_func(char *s))(int a, int b)
{
	int result;

	result = op_add(a, b);
	return (result);
}
