#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: string in capital letters
 */
char *cap_string(char *str)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97  && str[i] <= 122 && j == 0)
	{
		str[i] -= 32;
		j = 1;
	}
	else if (((str[i] >= 65 && str[i] <= 90)
	|| (str[i] >= 48 && str[i] <= 57)) && j == 0)
		j = 1;
	if (str[i] == 32 || str[i] == 10 || str[i] == 46 || str[i] == 9)
		j = 0;
	}
	return (str);
}
