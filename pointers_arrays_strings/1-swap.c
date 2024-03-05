#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
