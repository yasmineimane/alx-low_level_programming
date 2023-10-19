#include "main.h"

/**
 * _sqrt_recursion - calculate the natural root.
 * @n: parameter to be checked.
 * Return: square root.
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - return the square root.
 * @n: natural number.
 * @i: counter.
 * Return: square root.
*/

int _sqrt(int n, int i)
{
int sqr = i * i;

if (sqr > n)
return (-1);
if (sqr == n)
return (i);
return (_sqrt(n, i + 1));
}
