#include "main.h"

/**
*string_toupper - changes all lowercase to uppercase
*@str: string to be changes
*
*return: address tp the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[str] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}