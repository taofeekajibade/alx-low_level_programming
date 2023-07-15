#include <stdio.h>

/**
 *  *main - print 0123456789
 * *Description - this code prints digits 1 to 9 on separate lines.
 *  *Return: Always 0 (Success)
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		printf("%d  ", k);
		k++;
	}
	printf("\n");
	return (0);
}
