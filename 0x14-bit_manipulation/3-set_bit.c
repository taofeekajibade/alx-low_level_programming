#include "main.h"
/**
 * set_bit - abc
 * @n: 123
 * @index: 123
 * Return: interns
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask;

    if (index >= sizeof(unsigned long int) * 8)
    {
        return -1; // Error: Invalid index
    }

    mask = 1UL << index;
    *n |= mask;
    return 1;
}
