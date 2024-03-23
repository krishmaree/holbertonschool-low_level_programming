#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines dog attributes
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dogs owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *name;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
