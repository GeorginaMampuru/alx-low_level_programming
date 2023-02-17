#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
/**
 * Description: main - prints diffrent result as n is either =>< 5
 * Return: 0 if success.
 */

int main(void)
{

	int x;


	for (x = 'A'; x <= 'Z'; x++)
	{
	char small = tolower(x);

	putchar(small);
	}
	putchar("\n");
	return (0);
}
