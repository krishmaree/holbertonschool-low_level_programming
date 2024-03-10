#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: String to search
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}
		i++;
	}
	return (NULL);
}
