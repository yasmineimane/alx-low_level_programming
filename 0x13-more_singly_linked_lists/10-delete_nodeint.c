#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the first element of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;
	unsigned int i;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0 ; i < index - 1 && temp != NULL && index != 0 ; i++)
		temp = (*head)->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (1);
}
