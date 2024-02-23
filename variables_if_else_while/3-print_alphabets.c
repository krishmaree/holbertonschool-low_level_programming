#include <stdio.h>

/**
 * main - Program that prints the alphabet in lower cases, then in uppercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;

	while (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	while (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
