#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number for which to calculate the factorial
 *
 * Return: The factorial of the number, or -1 in case of an error
 *
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
