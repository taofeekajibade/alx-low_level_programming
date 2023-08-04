#include <stdio.h>

/**
 * main - prints the name of the file to sd/o
 * @argc: number of arguments
 * @argv: string array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
