#include <stdio.h>
#include "main.h"

/**
* main - print the name of the program
* @argc: count arguments
* @argv: argumtnts
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}
