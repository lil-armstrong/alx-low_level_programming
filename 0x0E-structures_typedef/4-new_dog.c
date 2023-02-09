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
	dog_t *dog = NULL;

	dog = malloc(sizeof(dog_t));
	if (dog != NULL)
	{
		dog->name = malloc(sizeof(char) * _strlen(name));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}


		_strcpy(name, dog->name);

		dog->owner = malloc(sizeof(char) * _strlen(owner));
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		_strcpy(owner, dog->owner);
		dog->age = age;
	}

	return (dog);
}

/**
 * _strlen - get length of string
 * @s: null terminated string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		++len;

	return (len);
}

/**
 * _strcpy - Copy source string to destination string
 * @src: source null terminated string
 * @dest: destination null terminated string
 * Return: void
 */
void _strcpy(char *src, char *dest)
{
	int i = 0;

	if (src != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			++i;
		}
	}
	dest[i] = '\0';
}
