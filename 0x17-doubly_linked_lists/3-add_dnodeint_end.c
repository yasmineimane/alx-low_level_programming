#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element.
 * @n: data to be added.
 * Return: new list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new;
		new->prev = ptr;
	}
	return (*head);
}
