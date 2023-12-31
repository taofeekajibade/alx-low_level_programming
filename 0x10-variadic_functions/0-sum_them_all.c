#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all arguments together
 * @n: number of arguments to sum up
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int i;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		result += va_arg(list, int);
	va_end(list);
	return (result);

}
