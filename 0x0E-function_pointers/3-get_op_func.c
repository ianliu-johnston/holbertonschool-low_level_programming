#include "3-calc.h"
/**
  * main - define function
  * @void - describe argument
  * Return: what does it return?
  */
int (*get_op_func(char *s))(int a, int b)
{
	return (op_add(a, b));
}
