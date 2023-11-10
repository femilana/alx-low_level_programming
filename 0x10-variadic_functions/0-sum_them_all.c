#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: keeps tract of the number of argument to be passsed in.
 * @...: the variable argument that would be passed in
 * Return: if n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int result = 0;
	va_list mynumber;
	va_start(mynumber,n);
	for(i = 0; i < n; i++)
	{
		result = result + va_arg(mynumber,int);
	}
	
	va_end(mynumber);
	return result;
}
