#include "lists.h"
/**
 * free_listint_safe - frees a listint linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		node_count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			*h = NULL;
			return (node_count);
		}
		free(temp);
	}
	*h = NULL;
	return (node_count);
}
