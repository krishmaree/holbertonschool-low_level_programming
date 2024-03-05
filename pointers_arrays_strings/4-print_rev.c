#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * followed by a new line
 * @str: Pointer to the string to be printed in reverse
 * Return: String printed in reverse
 */
void print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
		_putchar('\n');
}
