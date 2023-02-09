#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: pointer to character string
 * @c: character to locate
 * Return: pointer to character position
 */
char *_strchr(char *s, char c)
{

	/* clang-format off */
	do {
		if (*s == c)
			return (s);

	} while (*s++);
	return (NULL);
}
