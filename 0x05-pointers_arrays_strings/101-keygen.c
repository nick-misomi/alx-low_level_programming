#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*main - entry point
*Returns: generated password
*/

int main(void)
{
	char c;
	int y;

	srand(time(0));
	while (y <= 2645)
	{
		c = rand() % 128;
		y += c;
		putchar (c);
	}
	putchar (2772 - y);

	return (0);
}
