#include "dog.h"

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
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
