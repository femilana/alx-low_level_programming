#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int num;
	char *b;

	num = 1;
	b = (char *)&num;
	return (*b);
}
