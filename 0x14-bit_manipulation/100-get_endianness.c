/*100-get_endianness.c*/
#include "main.h"
/**
 * get_endianness - check the endianness
 * Return: 0 (Big endian), 1 (Little endian)
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	return (0);
}
