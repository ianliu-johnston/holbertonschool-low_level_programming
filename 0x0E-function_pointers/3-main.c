#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
  * main - define function
  * @argc: count of arguments
  * @argv: pointer to array of pointers
  * Return: 0 on success, 98 on malformed arguments, 99 if no operator
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[3] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = *get_op_func(argv[2]);
	printf("%d\n", result);
	printf("%d, %s, %d\n", num1, argv[2], num2);
	return (0);
}
