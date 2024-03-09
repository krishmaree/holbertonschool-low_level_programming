#include "main.h"

/**
 * *string_toupper - Function that changes all string letters to uppercase
 * @str: lower case string to be changed
 *
 * Return: uppercase string
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	i++;
	}
	return (str);
}
