#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *output;
	int count1 = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		count1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		count2++;

	output = malloc(sizeof(char) * (count1 + count2) + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		output[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		output[count1 + i] = s2[i];

	return (output);
}
