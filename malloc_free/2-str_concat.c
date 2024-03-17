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
	size_t len_s1, len_s2;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	concatenated = malloc((len_s1 = len_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);
		return (concatenated);
}
