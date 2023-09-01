#include "main.h"
/**
 * clear_bit - clear bits
 * @n: number
 * @index - 
 * 
 * Return 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask;

    if (index >= sizeof(unsigned long int) * 8)
    {
        return -1; // Error: Invalid index
    }

    mask = ~(1UL << index);
    *n &= mask;
    return 1;
}
