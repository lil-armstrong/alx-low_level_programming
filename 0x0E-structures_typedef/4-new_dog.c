#include "dog.h"

/**
 * new_dog - New dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dg;
	dog_t *d;

	d = &dg;
	d->age = age;
	d->name = name;
	d->owner = owner;

	return (d);
}
