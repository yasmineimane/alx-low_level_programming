#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the first element.
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nbNodes = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		nbNodes++;
	}
	return (nbNodes);
}
