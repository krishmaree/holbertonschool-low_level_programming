#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination of memory area
 * @src: Source of memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
