#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'q' || lowercase == 'e')
		{
			continue;
		}

		putchar(lowercase);
	}

	return (0);
}
