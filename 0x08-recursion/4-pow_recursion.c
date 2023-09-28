#include "main.h"

/**
 * _pow_recursion - function that return the pow.
 * @x: parameter to be checked.
 * @y: parameter to be checked.
 * Return: pow.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return(-1);
}
else if (y == 0)
{
return(1);
}
else
{
return(x * _pow_recursion(x, (y - 1)));
}
return(0);
}