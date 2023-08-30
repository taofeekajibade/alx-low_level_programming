#include "lists.h"
/**
 * print_listint_safe - prints a listint linked list
 * @head: pointer to the head node
 *
 * Return: number of nodes or exit if liat is empty
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *prev = NULL;

	while (current != NULL)
	{
		node_count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current >= current->next || current == prev)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		prev = current;
		current = current->next;
	}
	return (node_count);
}
