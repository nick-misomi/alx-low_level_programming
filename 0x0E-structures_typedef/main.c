#include <stdio.h>
#include "dog.h"

/**
* main - check the code for holberton school students.
*
*Return: always 0
*/
{
	struct dog my_dog;

	init_dog(&my_dog, "Django", 3.5, "Jay");
	printf("My name is %s, and i am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
