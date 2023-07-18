#include "main.h"

/**
 * print_sign - this code prints the ign of a number
 * @n - this represents the number to be checked
 * Returm: 1 for positive number, -1 for negative number and zero for others
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
