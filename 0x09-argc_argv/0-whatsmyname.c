#include <stdio.h>
/**
 * main - program prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	argc--; /*added to pass checks*/
	printf("%s\n", argv[0]);
	return (0);
}
