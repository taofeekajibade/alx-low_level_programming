#include "main.h"
/**
 * get_bit - get bits
 * @n: argument 1
 * @index: argument 2
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: Invalid index */
	}
	return ((n & mask) ? 1 : 0);
}

