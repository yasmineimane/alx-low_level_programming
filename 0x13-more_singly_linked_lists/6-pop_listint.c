#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the first element of the list
 * Return: head node’s data (n).
 * if the list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
