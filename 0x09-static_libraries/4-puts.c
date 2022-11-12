#include <stdio.h>
#include "main.h"
/**
  * main - Main entry function
  *
  * Description: program entry function
  * Return: void
  */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i))
		_putchar(*(s + i));
	_putchar(10);
}
