#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: array
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
