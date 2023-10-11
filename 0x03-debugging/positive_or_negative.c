#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - returns positive or negative
 * @i: parameter
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}

	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}

	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
