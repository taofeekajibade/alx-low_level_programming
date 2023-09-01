#include "main.h"
/**
 * flip_bits - flips...
 * @n: argument 1
 * @m: argument 2
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;

    while (xor_result)
    {
        if (xor_result & 1UL)
        {
            count++;
        }
        xor_result >>= 1;
    }

    return count;
}
