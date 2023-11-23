#include"main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: The index at which to check for the bit
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor;
	unsigned long int flag;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	flag = n & divisor;
	if (flag == divisor)
		return (1);
	return (0);
}
