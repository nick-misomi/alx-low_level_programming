#include <stdio.h>

/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
char sh;
for (sh = 'a'; sh <= 'z'; sh++)
{
if (sh != 'e' && sh != 'q')
{
	putchar(sh);
}
}
putchar('\n');
return (0);
}
