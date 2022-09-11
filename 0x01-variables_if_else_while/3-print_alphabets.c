#include <stdio.h>

/** main - this prints if number is positive, zero or negative
 *
 * tis programme prints "a" to "z" in small letters and caps
 */

int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
	putchar(alph);
}
for (alph = 'A'; alph <= 'Z'; alph++)
{
	putchar(alph);
}
putchar('\n');
return (0);
}
