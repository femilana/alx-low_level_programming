#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	char uppercase = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
