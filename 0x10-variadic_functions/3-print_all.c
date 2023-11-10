#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the functio
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *seperator = "";


	va_list argument;


	va_start(argument, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(argument, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(argument, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(argument, double));
					break;
				case 's':
					ptr = va_arg(argument, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", seperator, ptr);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}


	printf("\n");
	va_end(argument);
}
