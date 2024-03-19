#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: size of each element
 *
 * Return: Pointer to the allocated memory
 * NULL if malloc fails or if nmeb or size is 0
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
