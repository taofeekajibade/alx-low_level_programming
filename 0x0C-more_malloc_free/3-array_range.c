#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: argument 1
 * @max: argument 2
 * Return: new array
 */

int *array_range(int min, int max)
{
	int *new_array;
	int j, k;

	if (min > max)
		return (NULL);
	new_array = malloc(sizeof(int) * (max - min + 1));
	if (new_array == NULL)
		return (NULL);
	for (j = min, k = 0; j <= max; j++, k++)
		new_array[k] = j;
	return (new_array);
}

