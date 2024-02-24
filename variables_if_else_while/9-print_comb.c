#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 * separated by comma and space
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
