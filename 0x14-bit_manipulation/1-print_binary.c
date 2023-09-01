#include "main.h"
/**
 * print_binary - prints all
 * @n: num
 */

void print_binary(unsigned long int n) 
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int started = 0;

    if (n == 0)
	{
        putchar('0');
        return;
    }

    while (mask > 0)
	{
        if (n & mask)
		{
            putchar('1');
            started = 1;
        }
		else if (started) 
		{
            putchar('0');
        }
        mask >>= 1;
    }
}
