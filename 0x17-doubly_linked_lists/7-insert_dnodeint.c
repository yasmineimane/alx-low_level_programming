#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first element.
 * @idx: the index of the list where the new node should be added
 * @n: the new node data.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;
	unsigned int i = 0;

	if (idx == 0)
		return (add_nodeint(h, n));

	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	if (ptr->next == NULL)
		return (add_nodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next->prev = new;
	ptr->next = new;

	return (new);
}
