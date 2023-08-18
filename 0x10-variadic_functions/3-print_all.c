#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: parameters
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	char *s;
	char c;
	int n;
	float f;
	va_start(args, format);
	
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				n = va_arg(args, int);
				printf("%d", n);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
