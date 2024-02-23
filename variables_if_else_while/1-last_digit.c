#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;

	printf("Last digit of %d is %d and is ", n, l_d);

	if (l_d > 5)
		printf("greater than 5\n");
	else if (l_d == 0)
		printf("0\n");
	else if (l_d < 6) 
		printf("less than 6 and not 0\n");

return (0);
}
