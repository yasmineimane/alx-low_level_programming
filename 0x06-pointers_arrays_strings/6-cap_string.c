#include "main.h"
#include <stdio.h>

/**
 * cap_string -  function that capitalizes all words of a string.
 * @str: The string to be capitalize
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] == '.')
			str[i] = '.';
		else if (str[i] == '\n')
			printf("\n");
		else if (str[i] == '\t')
			str[i] = ' ';
		i++;
	}
	return (str);
}
