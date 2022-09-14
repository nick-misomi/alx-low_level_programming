#include "main.h"
/**
 * _islower - func to check for lowercase char
 * @c: is thr int that will use for the argument of the funtion
 * return:0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
		return (0);
}
