#include "main.h"
#include <stdio.h>


/**
 * find_sqrt - Helper function to find the square root within a specified range
 * @num: The number for which to find the square root
 * @root: the root to be tested
 *
 * Return: the natural square root of n within the specified range, or -1
 * if not found
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if ((root * root) > num)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
