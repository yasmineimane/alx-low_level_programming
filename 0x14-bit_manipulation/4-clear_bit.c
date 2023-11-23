#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a given number.
 * @index: The index of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = 1;
	num = num << index;
	if (index > (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = num ^ *n;

	return (1);
}
