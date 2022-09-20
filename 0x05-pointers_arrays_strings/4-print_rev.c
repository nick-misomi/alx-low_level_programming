#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - prints a string in reverse order
*@s: string to be printed in reverse
*return: nothing
*/

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
