#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
