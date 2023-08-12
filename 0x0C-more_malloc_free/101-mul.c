#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * mul - returns value of multiplication
 * @num1: argument 1
 * @num2: argument 2
 * Return: total
 */

int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * print_number - prints an integer to the standard output
 * @n: the integer to print
 */
void print_number(int n)
{
	int div = 1;
	int temp = n;

	if (n < 0)
		putchar('-');
		n = -n;
		temp = n;
	while (temp / 10 > 0)
		div *= 10;
		temp /= 10;
	while (div >= 1)
		putchar(n / div + '0');
		n %= div;
		div /= 10;
}
/**
 * main - multiplies two numbers
 * @argc: argument 1
 * @argv: argument 1
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
		write(2, "Error\n", 6);
		return (98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = mul(num1, num2);
	print_number(result);
	putchar('\n');
	return (0);
}
