#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: the first element of the list
 * @index: the index of the node, starting at 0
 * Return: nth node 
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp->next != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
		return (NULL);

	return (temp);
}
