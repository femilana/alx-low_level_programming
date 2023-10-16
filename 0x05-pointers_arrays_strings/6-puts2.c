#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: argument
 */

void puts2(char *str)
{
	int num = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		num++;
	}
	t = num - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
