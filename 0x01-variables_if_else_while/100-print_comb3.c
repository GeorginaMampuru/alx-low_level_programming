
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

	int x, z;

	for (x = '0'; x < '9'; x++)
	{
	
	for (z = '0'; z <= '9'; z++)
	{
	if (x != z)
	{
	putchar(x);
	putchar(z);
	if (x == '8' && z == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
