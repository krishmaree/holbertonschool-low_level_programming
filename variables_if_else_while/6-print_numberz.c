#include <stdio.h>

/**
 * main - Prints all single digit numbers from 0 to 10
 * without using char
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
	{
		int c;

		for (c = '0' ; c <= '9' ; c++)
			putchar(c);

		putchar('\n');
		return (0);
	}
