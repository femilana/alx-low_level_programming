#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * separated by a comma followed by a space
 * Return: 0
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2;

	while (a < 50)
	{
		if (a == 0)
		{
			printf("%ld", b);
		}
		else if (a == 1)
		{
			printf(", %ld", c);
		}

		else
		{
			c = c + j;
			b = c - b;

			printf(", %ld", c);
		}
		a++
	}
	printf("\n");
	return (0);
}
