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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp1 = *head;
	temp2 = *head;
	for (i = 0 ; i < idx ; i++)
	{
		if (temp2 == NULL)
			return (NULL);

		temp1 = temp2;
		temp2 = temp2->next;
	}
	new->next = temp2;
	temp1->next = new;
	return (*head);
}
