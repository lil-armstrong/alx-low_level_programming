#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print the fields of the dog struct
 * @d: dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d->age == NULL)
			d->age = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name, d->age, d->owner);
	}
}
