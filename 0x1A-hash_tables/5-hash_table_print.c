#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht;
	while (tmp != NULL)
	{
		print("%s : %s, ", tmp->array->key, tmp->array->value);
	}
}
