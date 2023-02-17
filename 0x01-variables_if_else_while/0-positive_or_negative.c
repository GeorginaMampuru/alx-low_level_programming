#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <cstdlib>

/**
 * Description: main - print n as if >0  positive or negative of <0.
 * Return: 0 if success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive");
	}
	else if (n < 0)
	{
	printf("is negative");
	}
	else if (n = 0)
	{
	printf("is zero");
	}
	return (0);
}
