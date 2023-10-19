#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list
 */

void free_list(list_t *head)
{
	while (head != NULL)
		free(head);
}
