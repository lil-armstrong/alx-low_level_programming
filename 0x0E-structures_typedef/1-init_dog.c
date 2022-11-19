#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: strcuuct of dog
 * @name: name field
 * @age: age field
 * @owner: owner field
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
