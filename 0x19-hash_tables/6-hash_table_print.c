#include "hash_tables.h"
/**
  * hash_table_delete - delete the whole hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("First for loop\n");
			while (ht->array[i])
			{
				printf("Freeing\n");
				tmp = ht->array[i];
				free(tmp->key);
				tmp->key = NULL;
				free(tmp->value);
				tmp->value = NULL;
				ht->array[i] = ht->array[i]->next;
				free(tmp);
				tmp = NULL;
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
	printf("Leaving\n");
}
