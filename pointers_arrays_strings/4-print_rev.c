#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * followed by a new line
 * @s: Pointer to the string to be printed in reverse
 * Return: String printed in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
