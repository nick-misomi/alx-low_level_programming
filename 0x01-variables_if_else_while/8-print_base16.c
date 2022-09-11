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
char b;
for (b = '0'; b <= '9'; b++)
{
	putchar(b);
}
for (b = 'a'; b <= 'f'; b++)
{
	putchar(b);
}
putchar('\n');
return (0);
}
