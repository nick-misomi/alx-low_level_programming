#include <stdio.h>

/**
 * main - prits number is positive, zero, or negative
 * return 0
 *
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
