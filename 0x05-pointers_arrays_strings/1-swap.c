#include "main.h"

/**
*swapint - swaps 2 ints values 
*@a: frist int
@b: second int
*return: nothing
*/
void swap_int(int *x, int *y)
{
	int tmp = *x;
	
	*x = *y;
	*y = tmp;
}
