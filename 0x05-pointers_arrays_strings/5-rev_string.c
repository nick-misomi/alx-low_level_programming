#include <stdio.h>
#include <string.h>
#include "main.h"


int str_len(char *s);
void rev_string(char *s);
int main(void)
{
	char s[50] = "My School";

	printf("String to be reversed is: %s", s);

	revstr(s);

	printf("The reverse string is: %s", s);
	return (0);
}
void rev_string(char *s)
{
	int len, i;
	char *start, *end, tmp;

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	end++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		start++;
		end__;
	}
}
int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
	i++;
	return (i);
}
