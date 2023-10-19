#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: the length of a string.
*/

int _strlen_recursion(char *s)
{
return (count_length(s, 0));
}

/**
 * count_length - counts the length of a string.
 * @s: string.
 * @i: counter.
 * Return: length.
*/

int count_length(char *s, int i)
{
if (*s == '\0')
return (i);
return (count_length(s + 1, i + 1));
}
