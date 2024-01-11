#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: pointer to the first element.
 * Return: the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
