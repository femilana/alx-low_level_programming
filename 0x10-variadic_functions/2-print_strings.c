#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - A function that Prints strings, followed by a new line.
	 * @separator: The string to be printed between strings.
	 * @n: The number of variable arguments passed into the function.
	 * @...: the variable argument passed into yhe function
	 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	char *ptr;
	unsigned int index;


	va_start(my_strings, n);
	for (index = 0; index < n; index++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");


	va_end(my_strings);
}
