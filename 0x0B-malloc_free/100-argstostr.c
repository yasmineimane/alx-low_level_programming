#include "main.h"

/**
 * argstorstr -  concatenates all the arguments
 * @ac: arguments count
 * @av: arguments vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			count++;
		count++;
	}
	str = malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	return (str);
}
