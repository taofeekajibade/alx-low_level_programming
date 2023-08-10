#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: argument 1
 * @size: memory size
 * Return: new_mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_memo;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	new_memo = malloc(total_size);
	if (new_memo == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++)
		new_memo[i] = 0;
	return (new_memo);
}

