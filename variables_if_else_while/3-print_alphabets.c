#include <stdio.h>

/**
 * Main - Print the alphabet in lowercase, then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a = 'a';
	char b = 'b';

	while (a <= 'z')
{
		putchar (a);
		a++;
}

	while (b <= 'Z')
{
		putchar (b);
		b++;
}
	putchar('\n');
	return (0);
}
