#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize the dog variable
 * @d: struct dog
 * @name: name field
 * @age: age field
 * @owner: owner field
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
