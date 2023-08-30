#include "lists.h"
/**
 * free_listint_safe - frees a listint linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		count++;
	}
	*h = NULL;
	return (count);
}
