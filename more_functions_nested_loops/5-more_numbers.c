#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, ten times
 *
 */
void more_numbers(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar('1');
			_putchar(c % 10 + '0');

		}
		_putchar('\n');
	}
}
