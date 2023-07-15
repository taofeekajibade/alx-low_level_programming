#include <stdio.h>

/**
 * main -main - Entry point - print lowercase a -z
 * Description: This will print alphabets in lowercase followed by a new line.
 * Return Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
