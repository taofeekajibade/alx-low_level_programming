#include "main.h"
/**
 * set_bit - function
 * @n: argument 1
 * @index: argument 2
 * Return: int
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: Invalid index */
	}

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
