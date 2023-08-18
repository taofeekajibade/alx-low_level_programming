#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all arguments togwther
 * @n: number of arguments to sum
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

        unsigned int result = 0;
        va_list list;
        unsigned int i;

        va_start(list, n);
        for (i = 0; i < n; i++)
                result += va_arg(list, int);
	va_end(list);

        return (result);

}
