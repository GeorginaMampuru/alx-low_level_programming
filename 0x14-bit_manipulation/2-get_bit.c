#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to be converted to binary
 * @index: index staring from 0 of the bit required
 *
 * Return: the bit of situated on the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
