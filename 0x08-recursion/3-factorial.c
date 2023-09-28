#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: Parameter to be checked.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
} else
return (n * factorial(n - 1));
}
