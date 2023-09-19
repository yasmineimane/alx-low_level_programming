#include "main.h"

/**
 * puts_half -  function that prints half of a string
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	if (count % 2 == 0)
	{
		for (i = ((count - 1) / 2) ; str[i] != '\0' ; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((count - 2) / 2) ; str[i] != '\0' ; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
