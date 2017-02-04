#include "hash_tables.h"
/**
  * hash_table_print - print the hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	char flag = 0;
	unsigned long int i, cp_bytes;
	char *buffer, *bufhead;

	i = cp_bytes = 0;
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		return;
	bufhead = buffer;
	buffer[0] = '{';
	buffer++;
	while (i <= ht->size)
	{
		if (ht->array[i] != NULL)
		{
			flag = 1;
			buffer[0] = '\'';
			buffer++;
			cp_bytes = strlen(ht->array[i]->key);
			memcpy(buffer, ht->array[i]->key, cp_bytes);
			buffer += cp_bytes;
			memcpy(buffer, "': '", 4);
			buffer += 4;
			cp_bytes = strlen(ht->array[i]->value);
			memcpy(buffer, ht->array[i]->value, cp_bytes);
			buffer += cp_bytes;
			memcpy(buffer, "', ", 3);
			buffer += 3;
		}
		i++;
	}
	if (flag != 0)
		buffer -= 2;
	memcpy(buffer, "}\n\0", 3);
	printf("%s", bufhead);
}
