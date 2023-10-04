#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space 
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i;
	char *s;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	s = malloc(sizeof(char) * count + 1);
	
	if (s == NULL)
		return (NULL);
	for (i  = 0 ; str[i] != '\0' ; i++)
		s[i] = str[i];
	return (s);
}
