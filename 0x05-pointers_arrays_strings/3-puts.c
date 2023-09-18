#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	puts(str);
	_putchar('\n');
}
