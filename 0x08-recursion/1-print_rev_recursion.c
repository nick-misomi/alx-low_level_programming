#include  "main.h"

/**
* _purint_rev_recursion - prints a string in reverse
* @s: string to be printed
*
*return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
