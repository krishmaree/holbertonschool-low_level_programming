#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a
 * square matrix integers
 * @a: Pointer to the square metrics
 * @size: Size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a = a + size;
	}
	printf("%d, %d\n", sum1, sum2);
}
