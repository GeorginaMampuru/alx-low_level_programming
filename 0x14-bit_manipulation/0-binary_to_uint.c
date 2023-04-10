#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: the binary number
  * Return: the unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal = decimal * 2;
		if (b[i] == '1')
		{
			decimal = decimal + 1;
		}
	}
	return (decimal);
}
