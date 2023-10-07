#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int digit = 0;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
