#include "main.h"

/**
 * puts_half - Function that prints half a string
 * @str: Pointer to the string
 * The funciton should print the second half of the string
 * If the number of character is odd, the function should print the last
 * n characters of the string
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

		for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
