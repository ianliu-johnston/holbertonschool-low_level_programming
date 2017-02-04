#include "hash_tables.h"
/*
 * decrypt_djb2 - decrypt djb2 values
 * @hash_val: encrypted string
 * Return: Decrypted string
 */
char *decrypt_djb2(unsigned long int hash_val)
{
	unsigned long hash = 5381;
	char *decry;
	char c;

	c  = (hash - (hash >> 5));
	printf("%c\n", c);
	return (decry);
}
