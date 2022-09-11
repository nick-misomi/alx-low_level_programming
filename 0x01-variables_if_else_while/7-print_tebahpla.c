#include <stdio.h>
/**
 * main - print if the number is postive, zero or negative
 *
 * this programme prints lowercase alphabet in reverse followed by new line
 * 
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
