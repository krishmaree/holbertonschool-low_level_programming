#include "main.h"

/**
 * _isupper: Checks for uppercase character
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 *
 * @c: is the character to be checked
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
