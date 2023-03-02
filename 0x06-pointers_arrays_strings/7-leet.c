#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer to array of chars.
 * Return: pointer t str.
 */
char *leet(char *str)
{
	int i, j;
	char *replace = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 20; j+2)
		{
			if (str[i] == replace[j])
				str[i] = replace[j + 1];
		}
	}
	return (str);
}
