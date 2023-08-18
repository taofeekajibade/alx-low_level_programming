#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *cha;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 1; i <= n; i++)
		{
			cha = va_arg(list, char *);
			if (cha == NULL)
				printf("(nil)");
			else
				printf("%s", cha);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(list);
	}
	printf("\n");

}
