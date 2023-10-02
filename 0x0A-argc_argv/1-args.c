#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
