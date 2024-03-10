#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a substring
 * @haystring: the string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		char *start = haystack + i;
		j = 0;

		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (start);

		i = start - haystack + 1;
	}
	return (NULL);
}
