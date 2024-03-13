#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
