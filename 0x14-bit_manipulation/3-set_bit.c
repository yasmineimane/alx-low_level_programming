#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number.
 * @index: The index of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	num = 1;
	num = num << index;
	*n = ((*n) | num);

	return (1);
}
