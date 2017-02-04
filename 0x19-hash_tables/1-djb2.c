#include "hash_tables.h"
/**
  * hash_djb2 - hashing algorithm by dan bernstein
  * @str: Describe.
  * Return: hashed value
  * This code is from http://www.cse.yorku.ca/~oz/hash.html
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
