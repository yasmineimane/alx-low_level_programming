#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		count1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		count2++;

	str = malloc(sizeof(char) * (count1 + n) + 1);

	if (str == NULL)
		return (NULL);

	if (n >= count2)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			str[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			str[count1 + i] = s2[i];
		str[count1 + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			str[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			str[count1 + i] = s2[i];
		str[count1 + i] = '\0';
	}

	return (str);
}
