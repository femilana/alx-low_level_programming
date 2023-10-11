#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input parameter
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
	n = -n;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
