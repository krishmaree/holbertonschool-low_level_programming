#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @src: string to be processed
 * @dest: the return value the string is pointed to
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i])
		dest[i] = '\0';

	return (dest);
}
