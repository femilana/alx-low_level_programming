#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: the number to set
 * @index: the index at which to set bit
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_bit = 1 << index;
	*n = *n | set_bit;
	return (1);
}
