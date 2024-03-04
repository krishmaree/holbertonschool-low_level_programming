#include "main.h"

/**
 * isupper: Check for uppercase character
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
