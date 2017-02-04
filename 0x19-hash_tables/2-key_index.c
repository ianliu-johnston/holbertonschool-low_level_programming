#include "hash_tables.h"
/**
  * key_index - gets the index of the key
  * @key: the key to get the index from
  * @size: the size of the hash table
  * Return: the index of the string
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
