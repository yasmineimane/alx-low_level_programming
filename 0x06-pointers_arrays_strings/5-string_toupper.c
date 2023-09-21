#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase.
 * @str: The string to be copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
