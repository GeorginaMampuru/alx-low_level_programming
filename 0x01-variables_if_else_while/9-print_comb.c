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

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	if (x != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
