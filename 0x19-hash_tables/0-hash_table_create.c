#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table.
  * @size: size of the hash table.
  * Return: pointer to the hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc((size + 1) * sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table[size] = NULL;
	return (new_table);
}
