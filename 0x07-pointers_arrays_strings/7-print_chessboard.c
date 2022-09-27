#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a:  pointer to pieces to print
*
* return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
