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

	while (*s)
	{
		match = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
			break;
		s++;
		accept -= count;
	}
	return (count);
}
