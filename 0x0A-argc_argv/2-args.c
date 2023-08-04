#include <stdio.h>

/**
 * main - prints all arguments passed
 * @argc: arguments counts
 * @argv: argument strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
