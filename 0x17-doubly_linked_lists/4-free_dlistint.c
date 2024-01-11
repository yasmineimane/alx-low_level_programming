#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the first element.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
