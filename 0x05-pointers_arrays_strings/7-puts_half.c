#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * The function should print the second half of the string
 * @str: argument
 */

void puts_half(char *str)
{
	int a, n, num;

	num = 0;

	for (a = 0; str[a] != '\0'; a++)
		num++;

	n = (num / 2);

	if ((num % 2) == 1)
		n = ((num + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
