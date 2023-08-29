#include "lists.h"

/**
 * listit_len - prints the number of elements in a linked listint_t list
 * @h: pointer to nodes
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

