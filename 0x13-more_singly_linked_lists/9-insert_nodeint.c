#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the first element of the list
 * @idx: the index of the new nodde
 * @n: the integer value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp1, *temp2;
	unsigned int i;

	temp1 = *head;
	if (head== NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return(new);
	}

	if (idx == 0)
		*head = new;

	for (i = 0 ; i < idx - 1 && temp1 != NULL && idx != 0; i++)
	{
		temp1 = temp1->next;
	}
	if (temp1 == NULL)
		return (NULL);
	if (idx == 0)
		new->next = temp1;
	else
	{
		temp2 = temp1->next;
		temp1->next = new;
		new->next = temp2;
	}
	return (new);
}
