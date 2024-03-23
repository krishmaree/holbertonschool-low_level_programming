#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struc dog to print
 *
 * Return: 0
 *
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (!(d->name))
			printf("Name: (nil)\n");

		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);


		if (!(d->owner))
			printf("Owner: (nil)\n");

		else
			printf("Owner: %s\n", d->owner);
	}
}
