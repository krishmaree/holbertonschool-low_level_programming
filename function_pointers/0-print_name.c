#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Functions that prints a name
 * @name: name to print
 * @f: Pointer to the function that prints the name
 *
 * Return: 0
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
