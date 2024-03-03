#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (column = 0; column <= 9; column++)
		{

		result = row * column;

			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');

			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
