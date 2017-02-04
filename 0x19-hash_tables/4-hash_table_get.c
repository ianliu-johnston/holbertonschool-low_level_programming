#include "hash_tables.h"
/**
  * *hash_table_get - define function
  * @void: describe argument
  * Return: 0 on success
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = 0;
	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
		return(ht->array[index]->value);
	return (NULL);
}
