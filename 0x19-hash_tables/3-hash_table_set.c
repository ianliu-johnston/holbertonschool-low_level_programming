#include "hash_tables.h"
/**
 * create_node - creates a new key-value entry
 * @key: key to add
 * @node: value to add to key
 * Return: the node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (!key || strlen(key) <= 0 || !value)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (NULL);
	new_node->value = strdup(value);
	if (new_node->value  == NULL)
		return (NULL);
	new_node->next = NULL;
	return (new_node);
}
/**
  * hash_table_set - define function
  * @void: describe argument
  * Return: 0 on success
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *next, *prev;

	new_node = next = prev = NULL;
	if (!ht || !key || strlen(key) <= 0 || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	next = ht->array[index];
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	ht->array[index] = new_node;
	return (1);
}
