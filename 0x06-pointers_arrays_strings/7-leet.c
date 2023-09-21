#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *leet(char *s)
{
	int i, j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
		}
	}
	return (s);
}
