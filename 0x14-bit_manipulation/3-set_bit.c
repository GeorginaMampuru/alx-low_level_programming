#include "main.h"
#include <stddef.h>

/**
 * set_bit -function that sets the value of a bit to 1 at a given index.
 * @n: value  to be used
 * @index: index to be set
 *
 * Return: should return 1 on success, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > 63))
		return (-1);
	*n |= (1 << index);
	return (1);
}
