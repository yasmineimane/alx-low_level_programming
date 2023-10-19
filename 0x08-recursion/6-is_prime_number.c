#include "main.h"

/**
 * is_prime_number - indicate if the number is prime oor not.
 * @n: parameter to be checked.
 * Return: is prime or not.
*/

int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - chek if the number is prime or not.
 * @n: parameter to be checked.
 * @i: parameter to be checked.
 * Return: is prime or not.
*/

int check_prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (check_prime(n, i + 1));
}
