#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - A function that Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of variable arguments passed to the function.
 * @...: the variable argument passed into the funcion
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_nums;
	unsigned int i;

	va_start(my_nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(my_nums);
}
