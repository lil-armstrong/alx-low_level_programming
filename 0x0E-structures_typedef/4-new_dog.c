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
		dog->name = _strcpy(name);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = _strcpy(owner);
		if (dog->owner == NULL)
		{
			free(dog);
			free(dog->name);
			return (NULL);
		}
		dog->age = age;
	}

	return (dog);
}

/**
 * _strcpy - Create a copy of a string
 * @str: null terminated string
 * Return: pointer to new string (SUCCESS) NULL (FAIL)
 */
char *_strcpy(char *str)
{
	int len = 0;
	char *new_string = NULL;

	while (str[len] != '\0')
		len++;

	new_string = malloc(sizeof(char) * len);
	if (new_string != NULL)
	{
		len = 0;
		while (str[len] != '\0')
		{
			new_string[len] = str[len];
			len++;
		}
		new_string[len] = '\0';
	}

	return (new_string);
}
