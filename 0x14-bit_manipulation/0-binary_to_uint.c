#include "main.h"
/**
 *  binary_to_unint - converts binary to an unsigned int
 *  @b: pointer to character
 *
 *  Return: unsigned int.
 *
 *  Description: initialize the result to zero. Returns 0 with a null pointer.
 *  It loops through the string until the end. If any of the input character is
 *  a non-binary character, it returns zero. Otherwise, it moves on and and do
 *  the conversion. Finally, it returns the result of the conversion.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = num * 2 + (*b - '0');
		b++;
	}
	return (num);
}
