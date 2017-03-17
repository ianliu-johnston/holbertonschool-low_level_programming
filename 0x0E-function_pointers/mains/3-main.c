#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - define function
  * @argc: count of arguments
  * @argv: pointer to array of pointers
  * Return: 0 on success, 98 on malformed arguments, 99 if no operator
  */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
		printf("Error\n"), exit(98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	if (num2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(num1, num2)));
	return (0);
}
