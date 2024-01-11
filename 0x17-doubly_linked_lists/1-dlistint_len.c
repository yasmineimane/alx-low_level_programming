#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a dlistint_t list.
 * @h: pointer to the first element.
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nbNodes = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		nbNodes++;
	}
	return (nbNodes);
}
