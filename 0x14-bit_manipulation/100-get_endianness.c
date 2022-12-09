/*100-get_endianness.c*/
#include "main.h"
/*
	Big endian aka network byte order
	Little endian akahost byte order
*/

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char*) &x;

	if (*c == 0x10)
		/*Little endianness*/
		return (1);
	/*Big endianness*/
	return (0);
}
