#include <stdio.h>
/**
 * main prints the many var types
 *
 * Return: always 0 if successful
 */
int main(void)
{
	char a;
	int y;
	long int b;
	long long int x;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(y));
	printf("Size of a long int %d bytes\n(s)", sizeof(b));
	printf("Size of a long long int %d bytes(s)\n", sizeof(x));
	printf("Size of a float %d byte(s)\n", sizeof(e));
	reurn (0);
}
