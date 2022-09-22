#include "main.h"

/**
*rot13 - encodes a string into rot13
*@str: string to encode
*
*return: address of the encoded string
*/
char transform_2(char x);
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
*transform_2 - helper function to map a letter with it's rot13 encoding
*@x: char to be encoded
*
*return: the encoded char
*/

char transform_2(char x)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
