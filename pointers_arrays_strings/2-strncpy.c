#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function that copies a string
 * @dest: pointer to the destination array where content is to be copied
 * @src: string to be copied
 * @n: number of characters to be copied from the source
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
