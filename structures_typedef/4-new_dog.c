#include "dog.h"
#include<stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to the newly created dog or print NULL if function fails
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int i, name_length, owner_length;

	new_dog_ptr = malloc(sizeof(*new_dog_ptr));
	if (new_dog_ptr == NULL || !(name) || !(owner))
	{
		free(new_dog_ptr);
		return (NULL);
	}

	for (name_length = 0; name[name_length]; name_length++)
		;

	for (owner_length = 0; owner[owner_length]; owner_length++)
		;

	new_dog_ptr->name = malloc(sizeof(char) * (name_length + 1));
	new_dog_ptr->owner = malloc(sizeof(char) * (owner_length + 1));
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->owner);
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		new_dog_ptr->name[i] = name[i];
	new_dog_ptr->name[i] = '\0';

	new_dog_ptr->age = age;

	for (i = 0; i < owner_length; i++)
		new_dog_ptr->owner[i] = owner[i];
	new_dog_ptr->owner[i] = '\0';

	return (new_dog_ptr);
}
