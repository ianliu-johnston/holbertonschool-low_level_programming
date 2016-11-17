#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
  * main - define function
  * @void - describe argument
  * Return: what does it return?
  */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[3] != '/')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", *get_op_func(op_add(num1, num2)));
	printf("%d, %s, %d\n", num1, argv[2], num2);
	return (0);
}
