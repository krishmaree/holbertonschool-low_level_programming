#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: new string
 */
char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	char *ptr = str;
	int i;

	while (*str)
	{
		i = 0;
		while (leet_chars[i])
		{
			if (*str == leet_chars[i])
			{
				*str = leet_nums[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (ptr);
}
