#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (int i = 2 ; i < 50 ; i++)
    	{
	    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (int i = 0 ; i < 50 ; i++) 
	{
	    printf("%lld\n", fibonacci[i]);
	}
	printf("\n");
	return 0;
}

