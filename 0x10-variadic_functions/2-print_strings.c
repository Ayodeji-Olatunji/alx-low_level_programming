#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator for char
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}

		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s\n", str);
	}

	va_end(args);
}
