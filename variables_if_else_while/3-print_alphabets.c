#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a= 'a', b= 'A';

	while (a <= 'z')
{
		putchar (a);
}		a++;

	while (b <= 'Z')
{
		putchar (b);
		b++;
}
	putchar('\n');
	return (0);
}
