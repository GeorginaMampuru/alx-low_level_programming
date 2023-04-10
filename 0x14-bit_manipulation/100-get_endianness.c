#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 1 if little endian, 0 if not
 */
int get_endianness(void)
{
	unsigned int test = 1;

	char *endian = (char *)&test;

	if (*endian)
	{
		return (1);
	}
	
	return (0);
}
