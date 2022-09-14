#include "main.h"

/**
 * isalpha -func to check if c is a letter(lowercase or caps)
 * @c: is int that will use for the argument of the function
 * return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'z'))
	{
	return (1);
	}
	return (0);
}
