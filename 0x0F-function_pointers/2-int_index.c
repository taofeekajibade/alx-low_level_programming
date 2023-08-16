#include <stddef.h>

/**
 * int_index - function that searches for integer in array using function pointer
 * @array: array
 * @size: array size
 * @cmp: pointer to searching/comparing function
 * Return: index if integer is found, or -1 if not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* initializes counter */

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);

}
