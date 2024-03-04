#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0 ; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
