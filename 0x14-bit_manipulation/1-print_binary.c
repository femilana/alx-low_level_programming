#include "main.h"

/**
 * _pow - A function that calculates the base power
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of the base power
 */


unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int count;

	num = 1;
	for (count = 1; count <= power; count++)
		num *= base;
	return (num);
}

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char wave;

	wave = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			wave = 1;
			_putchar('1');
		}
		else if (wave == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
