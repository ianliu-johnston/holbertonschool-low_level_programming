#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote. 
 * Return: 1 if success.
 */
int main(void)
{
	char quote[]="and that piece of art is useful - Dora Korpar, 2015-10-19\n";
	write(1,quote,sizeof(quote));
	return (1);
}
