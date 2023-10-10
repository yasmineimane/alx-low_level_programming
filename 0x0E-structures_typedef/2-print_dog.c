#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		d->name = "nil";
		d->owner = "nil";
	}
	
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
