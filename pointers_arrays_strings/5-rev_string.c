#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string that will be reversed
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
