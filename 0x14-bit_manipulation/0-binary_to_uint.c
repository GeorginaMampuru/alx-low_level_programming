#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - checks if a string is a valid binary
 * @b: string to be checked
 *
 * Return: 1 if string is valid and 0 if not
 */

int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}

	return (1);
}


/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0;
	int base = 1;

	if (!check_valid_string(b))
		return (0);
	while (b[str_len] != '\0')
		str_len++;
	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}

	return (decimal);
}
