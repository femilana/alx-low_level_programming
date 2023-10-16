#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: Input argument
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int num;

	while (s[counter] != '\0')
	counter++;
	for (num = 0; num < counter; num++)
	{
		counter--;
		rev = s[num];
		s[num] = s[counter];
		s[counter] = rev;
	}
}
