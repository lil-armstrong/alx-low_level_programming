#include "function_pointers.h"

/**
 * print_name - prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fn)(char* n) = f;
	fn(name);
}


