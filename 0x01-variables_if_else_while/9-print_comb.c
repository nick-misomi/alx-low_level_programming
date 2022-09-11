#include <stdio.h>
/**
 * main - print numbers from 0-9 with commas and space in between them
 *
 */
int main(void)
{
	int sd;

	for (sd = 48; sd <= 57; sd++)
	{
		putchar(sd);
		if (sd != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
