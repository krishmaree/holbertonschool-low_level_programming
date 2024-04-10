#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a but to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 if succesful, or
 * -1 if an error occured
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if n is NULL */
	if (n == NULL)
		return (-1);

	/* check if index is valid */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* clear the bit at the specified index to 0*/
	*n &= ~(1UL << index);

	return (-1);
}
