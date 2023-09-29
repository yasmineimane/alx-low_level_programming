#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse.
 * @s: string.
 * Return: string in reverse.
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}