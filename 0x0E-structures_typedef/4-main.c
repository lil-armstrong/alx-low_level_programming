#include "dog.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;
	char *name = "Ghost", *owner = "Jon Show";

	my_dog = new_dog(name, 4.75, owner);
	printf("My name is %s, and I am %.2f. I am owned by %s. :) - Woof!\n",
		   my_dog->name, my_dog->age, my_dog->owner);
	name = "Becky";
	owner = "Jason Shadow";
	printf("My name is %s, and I am %.2f. I am owned by %s. :) - Woof!\n",
		   my_dog->name, my_dog->age, my_dog->owner);

	if(my_dog)
		free(my_dog);
	return (0);
}
