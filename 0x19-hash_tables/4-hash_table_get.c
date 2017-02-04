#include "hash_tables.h"
/**
  * *hash_table_get - define function
  * @ht: hash table to lookup
  * @key: key to lookup in the hash table
  * Return: NULL on error, the value of the key on success
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = 0;
	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
