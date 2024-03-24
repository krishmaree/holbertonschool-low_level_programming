#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a separator and a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Description: This function prints the integers passed to it, separated by
 * the string specified by separator. It then prints a new line.
 * If separator is NULL, it won't be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
