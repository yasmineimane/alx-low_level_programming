#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * @head: the first element of the list
 * Return: the sum of all the data (n)
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
