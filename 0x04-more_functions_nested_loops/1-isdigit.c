#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit.
 * @c: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c)
{
	int result;

	if (isdigit(c))
		result = 1;
	else
		result = 0;
	return (result);
}
