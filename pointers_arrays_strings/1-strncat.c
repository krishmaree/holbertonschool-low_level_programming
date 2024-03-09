#include "main.h"
#include <stdio.h>

/**
 * _strncat - Function that concatenates two strings
 * @dest: the string where we want to append.
 * @src: the string from which n characters are going to append.
 * @n: represents a maximum number of characters to be appended.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
