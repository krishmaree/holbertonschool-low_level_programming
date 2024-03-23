#include "3-calc.h"
#include <stdio.h>


/**
* op_add - Sum of two numbers.
* @a: first integer
* @b: second integer
* Return: sum of a and b
*
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of two numbers.
* @a: first integer
* @b: second integer
* Return: Difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - product of a and b
* @a: First integer
* @b: Second integer
* Return: product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - result of division of a by b
* @a: The first integer
* @b: The second integer
* Return: result of division of a by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - remainder of the division of a by b
* @a: The first integer
* @b: The second integer
* Return: remainder of the division of a by b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
