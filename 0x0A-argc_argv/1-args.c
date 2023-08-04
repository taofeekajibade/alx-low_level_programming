#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: string array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
