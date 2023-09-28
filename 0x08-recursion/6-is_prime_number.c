#include "main.h"

/**
 * _prime_number - indicate if the number is prime oor not.
 * @n: parameter to be checked.
 * Return: is prime or not.
*/

int is_prime_number(int n)
{
int i;

if (n < 0)
{
return (0);
}
else {
for (i = 2 ; i < n / 2 ; i++)
{
if (n % i == 0)
{
return (0);
}
else
{
return (1);
}
}
}
return (0);
}
