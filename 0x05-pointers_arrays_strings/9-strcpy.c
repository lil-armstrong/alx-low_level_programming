#include "main.h"

/** * _strcpy - copy string from src to dest
 * @dest: ded0stination buffer pointer
 * @src: source string pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

