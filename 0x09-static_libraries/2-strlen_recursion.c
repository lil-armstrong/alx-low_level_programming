#include "main.h"

/**
 * charLoop - Loops thru a character string recursively
 * @s: character string
 * @index: tracking index
 *
 * Return: total length of the string
 */
int charLoop(char *s, int index)
{
	if (*s)
	{
		++index;
		return (charLoop((s + 1), index));
	}
	return (index);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to array of characters to print
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	return (charLoop(s, 0));
}
