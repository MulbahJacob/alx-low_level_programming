#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(arg);
}
