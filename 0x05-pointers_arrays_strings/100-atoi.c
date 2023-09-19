#include "main.h"
#include <stdlib.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
	int c = 0;
	int min = 1;
	unsigned int ni = 0;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
			min *= -1;
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
			break;
		c++;
	}
	ni *= min;
	return (ni);
}
