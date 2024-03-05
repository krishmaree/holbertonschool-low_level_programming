#include "main.h"
#include <stdio.h>

/**
 * print_array- Prints n elements of an array of integers
 * @a: The array given
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
