#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to retrieve the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at index, or
 * -1 if an error occured
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;

	return (n & 1);
}
