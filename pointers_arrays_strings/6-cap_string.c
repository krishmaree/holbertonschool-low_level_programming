#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: string in capital letters
 */
char *cap_string(char *str)
{
	int capital = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capital)
		{
			str[i] -= ('a' - 'A');
			capital = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' ||
			str[i] == '.' || str[i] == '!' ||
			str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}')
		{
			capital = 1;
		}
	}
	return (str);
}
