#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: returns int
 *
 * Description: This function works by first creating an integer variable num
 * with the value of 1. It then takes the address of num and cast it to
 * a pointer of type char - thus giving a pointer to the 1st byte of num.
 * It then checks the value of the byte pointed to by the pointer.
 * If the value is 1, the machine is little endian. Otherwise, it's big endian.
 */
int get_endianness(void)
{
	int num = 0x00000001;
	char *byte_order = (char *)&num;

	return (byte_order[0]);
}
