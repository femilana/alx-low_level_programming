#include "main.h"

/**
 * binary_to_uint - a function converts a binary number to an unsigned int
 * @b: a pointer to the string that contains the binary numbe
 * Return: num
 */


unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		num <<= 1;
		if (b[count] == '1')
			num += 1;
	}
	return (num);
}
