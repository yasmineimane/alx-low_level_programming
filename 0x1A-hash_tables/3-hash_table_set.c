#include "hash_tables.h"

/**
 * hash_table_set - adds an element into the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key to be added
 * @value: the value to be added
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array == NULL)
		return (0);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if ((new->key) == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if ((new->value) == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = (ht->array[index]);
	((ht->array)[index]) = new;
	return (1);
}
