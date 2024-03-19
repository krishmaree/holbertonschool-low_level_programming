#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, NULL on failure
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, total_length, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	total_length = len_s1 + n;

	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		result[len_s1 + j] = s2[j];

	result[total_length] = '\0';

	return (result);
}
