#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - prints astring in reverse order
*@s: string to reverse
*return: nothing
*/
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
{
