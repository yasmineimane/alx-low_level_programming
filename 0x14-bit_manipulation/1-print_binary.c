#include "main.h"

/**
 * print_bin - prints the binary representation of a number recursively.
 * @n: number.
 */

void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints out binary.
 * @n: number.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
