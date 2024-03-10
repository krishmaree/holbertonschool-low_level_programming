#include "main.h"

/**
 * _strspn - Function that gets the lenght of a prefix substring
 * @s: String to check
 * @accept: Bytes to be checked for in s
 *
 * Return: Number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (s[count] != '\0')
	{
		match = 0;

		while (accept[match] != '\0' && s[count] != accept[match])

			match++;

		if (accept[match] == '\0')
			return (count);

		count++;
	}

	return (count);
}
