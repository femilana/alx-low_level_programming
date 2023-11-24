#include "main.h"

/**
* flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bitcounter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	int count;

	for (count = 63; count >= 0; count--)
	{
		current = exclusive >> count;
		if (current & 1)
			bitcounter++;
	}

	return (bitcounter);
}
