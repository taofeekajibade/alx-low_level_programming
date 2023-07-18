#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10x and ends with a new line.
 *
 * Return: Always 0;
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');

	}
}
