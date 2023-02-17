#include <stdlib.h>
#include <time.h>
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
	if (n < 0)
	{
	printf("negative");
	}
	else if (n > 0)
	{
	printf("negative");
	}
	return (0);
}
