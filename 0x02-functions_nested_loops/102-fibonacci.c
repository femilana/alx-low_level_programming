#include <stdio.h>

/**
 * main - A function that prints first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: 0
 */

int main(void)
{
	int num;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
