#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line
 * @s: argument
 */

void print_rev(char *s)
{
	int num = 0;

	int num1;

	while (*s != '\0')
	{
		num++;
		s++;
	}

	s--;

	for (num1 = num; num1 > 0; num1--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('n');
}
