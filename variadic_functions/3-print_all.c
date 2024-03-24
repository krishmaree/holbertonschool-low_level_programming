#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the provided format
 * @format: A list of types of arguments passed to the function
 *
 * Description: This function prints the arguments passed to it based on the
 * format string provided. The format string specifies the types of arguments
 * to be printed: 'c' for char, 'i' for integer, 'f' for float, and 's' for
 * string. If a string argument is NULL, it prints "(nil)" instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str_arg;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					str_arg = "(nil)";
				printf("%s%s", separator, str_arg);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
