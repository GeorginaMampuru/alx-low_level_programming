#include "main.h"

/**
 * flip_bits - number of bits to be fliped to get from one number to another
 * @n: initial number
 * @m: final number
 *
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped  >>= 1;
	}

	return (count);

}
