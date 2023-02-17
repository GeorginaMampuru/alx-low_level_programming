#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * Description: main - prints diffrent result as n is either =>< 5
 * Return: 0 if success.
 */

int main(void)
{
	int n1;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;



	if (n1 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, n1);
	}
	else if (n1 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n1);
	}
	else if (n1 < 6 && n1 != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n1);
	}
	return (0);
}
