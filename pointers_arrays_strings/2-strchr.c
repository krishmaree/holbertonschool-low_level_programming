#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Return: Pointer to the first occurence of the character c in s,
 * or NULL if not found
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
