#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to node
 * Return: total number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t total = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d ", current->n);
		total++;
		current = current->next;
	}
	print("\n");
	return (total);
}



