#include "main.h"

/**
 *swap_int - swaps 2 ints values
 *@x: frist integer
 *@y: second integer
 *return: nothing
 */

void swap_int(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
