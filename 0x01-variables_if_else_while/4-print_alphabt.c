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

	char x, q, e;

	e = 'e';
	q = 'q';

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x != q && x != e)
	{
	putchar(x);
	}
	}
	putchar('\n');
	return (0);
}
