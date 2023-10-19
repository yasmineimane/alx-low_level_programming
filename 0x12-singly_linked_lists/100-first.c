#include "lists.h"

void _first(void)__attribute__ ((constructor));

/**
 * _first - runs before the main functio
 */

void _first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
