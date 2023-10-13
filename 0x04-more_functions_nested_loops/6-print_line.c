#include "main.h"

/**
 * print_line - a function draws a straight line in the terminal
 * @n: argument
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int num;

		for (num = 1; num <= n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
