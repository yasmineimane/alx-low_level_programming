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
	int n;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	n = (count - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
