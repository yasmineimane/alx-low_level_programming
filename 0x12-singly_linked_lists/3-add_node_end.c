#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list
 * @str: string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (temp == NULL)
		*head = new_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		temp = new_node;
	}
	return (*head);
}
