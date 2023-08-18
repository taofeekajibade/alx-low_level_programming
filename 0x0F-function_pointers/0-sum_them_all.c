#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of a variable number of int parameters.
 * @n: integer parameters
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int total = 0, i;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
		total += va_arg(list, int);
	va_end(list);

	return (total);

}
