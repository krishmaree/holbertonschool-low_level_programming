#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: Pointer to the string to be measured
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
