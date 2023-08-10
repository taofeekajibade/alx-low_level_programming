#include <stdlib.h>

/**
 * _realloc - reallocates memory blocks using malloc and free
 * @ptr: argument 1
 * @old_size: argument 2
 * @new_size: argument 3
 * Return: new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;
	char *old_mem;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	old_mem = ptr;
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		new_mem[i] = old_mem[i];
	free(ptr);
	return (new_mem);
}
