#include <stdio.h>

/**
 * main - Entry point, print 00 to 99 using putchar, excluding same digit combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens;
    int ones;

    for (tens = '0'; tens <= '9'; tens++) /* print tens place */
    {
        for (ones = tens + 1; ones <= '9'; ones++) /* print ones place, starting from the next digit after tens */
        {
            putchar(tens);
            putchar(ones);
            if (tens != '8' || ones != '9') /* skip comma at the end */
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}

