#include <stdio.h>

/**
 *
 *  * main - print if the number is postive, zero, or negative
 *
 *   *
 *
 *    * Description: using the main function
 *
 *     * this program prints "Programming is positive, zero, or negative
 *
 *      * Return: 0
 *
 *       */

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
