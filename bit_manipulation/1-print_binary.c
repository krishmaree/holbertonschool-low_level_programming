#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Description: prints the binary representation of a given
 * unsgined long int without using arrays, malloc, or % or / operators.
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
