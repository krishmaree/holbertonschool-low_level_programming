#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a separator and a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 *
 * Description: This function prints the strings passed to it, separated by
 * the string specified by separator. It then prints a new line.
 * If separator is NULL, dont print it
 * If one of the string is NULL, print "(nil)" instead
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
