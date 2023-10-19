#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to be printed
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t i = 0;

	if (temp->str == NULL)
		printf("[0] (nil)");

	while (temp != NULL)
	{
		printf("[%d] %s \n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
