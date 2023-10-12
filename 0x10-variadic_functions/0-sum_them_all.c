#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_all_them_all -  returns the sum of all its parameters
 * @n: number of parameter
 * @...: a variable number of all parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
