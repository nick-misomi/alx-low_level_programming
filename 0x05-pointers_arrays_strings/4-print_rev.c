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
	int len = strlen(s);

	for (len--;)
		putchar(*(s + len));
	putchar (10);
}
