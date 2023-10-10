#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int num = 1;
	char alpha = 'a';

	for (num = 1; num <= 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
