#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: Pointer to the struct dog to initialise
 * @name: Name of the dog
 * @age: Age of the Dog
 * @owner: Owner of the dog
 *
 * Return: 0
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
