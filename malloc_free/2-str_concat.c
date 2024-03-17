#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 != NULL)
	{
		for (len_s1 = 0; s1[len_s1]; len_s1++);
	}
	if (s2 != NULL)
	{
		for (len_s2 = 0; s2[len_s2]; len_s2++);
	}

	concatenated = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];

	concatenated[len_s1 + len_s2] = '\0';

	return (concatenated);
}
