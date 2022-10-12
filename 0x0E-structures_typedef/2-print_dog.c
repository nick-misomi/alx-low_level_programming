#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: pointer to structure
*
*Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name !=NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		print("Age: %.6f\n", d->age);
		if (d->ower != NULL)
			printf("ower: %s\n", d->owner);
		else
			print("ower: (nil)n");
	}
}
