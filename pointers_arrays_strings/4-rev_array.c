#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: pointer to the array of integers
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
