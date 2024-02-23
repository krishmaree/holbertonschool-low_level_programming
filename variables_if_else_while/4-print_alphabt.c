#include <stdio.h>

/**
 * main - Prints the alphabet in lowecase except q and e
 *
 * Return: Always (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{	
		if (c != 'q' && c != 'e')
		{
			putchar (c);
		}	
	}

	putchar ('\n');

	return (0);
}
