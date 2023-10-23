#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: List
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
