#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int count = 0;
	int num = 0;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				_putchar('0' + num);
			}
			else
			{
				_putchar('1');
				_putchar('0' + (num - 10));
			}
		}
		_putchar('\n');
	}
}
