#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: string in capital letters
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
