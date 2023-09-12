#include "main.h"
#include<stdio.h>

/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			printf("%d, ", result);
		}
		printf("\n");
	}
}
