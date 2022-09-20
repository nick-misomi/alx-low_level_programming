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
	int n;

	for(n = 0; s[n] != '\0'; n++)

	for(--n; n >= 0; --n)
		_putchar(s[n]);

	_putchar('\n');
}
