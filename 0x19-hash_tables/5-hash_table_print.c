#include "hash_tables.h"
/**
  * hash_table_print - define function
  * @void: describe argument
  * Return: 0 on success
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *end;

	i = 0;
	while (ht->array[i])
	{
		end = ht->array[i]->next ? ", " : "\n";
		printf("%s:%s%s", ht->array[i]->key, ht->array[i]->value, end);
		ht->array[i] = ht->array[i]->next;
	}
	putchar('\n');
}
