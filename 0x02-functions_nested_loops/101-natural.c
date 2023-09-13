#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3 ; i <= 1024 ; i++)
	{
		if ((3 % i == 0 || 5 % i == 0))
			sum = sum + i;
	}
	printf("The sum of all the multiples of 3 or 5 below 1024 is : %d\n", sum);
	return (0);
}
