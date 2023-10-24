#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the first element of the list
 * @index: the index of the node, starting at 0
 * Return: nth node
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0 ; i < index ; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
