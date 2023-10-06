#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	while (n != 0)
	{
		lastdigit = n % 10; /** gets the last digit*/
		if (lastdigit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
		}

		else if (lastdigit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastdigit);
		}

		else if (lastdigit < 6 && lastdigit != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
					lastdigit);
		}

		n /= 10;
	}
	return (0);
}
