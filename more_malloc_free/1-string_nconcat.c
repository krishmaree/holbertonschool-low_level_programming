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
	unsigned int s1_len = 0, s2_len = 0, total_len, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	total_len = s1_len + n;

	result = malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++)
		(s1_len++);
	{
		result[s1_len] = s2[j];
	}

	result[s1_len] = '\0';

	return (result);
}
