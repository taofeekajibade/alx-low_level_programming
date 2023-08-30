#include "lists.h"
/**
 * print_listint_safe - prints a listint linked list
 * @head: pointer to the head node
 *
 * Return: number of nodes or exit if liat is empty
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	if (head == NULL)
	{
		printf("Empty list\n");
		exit(98);
	}
	while (current != NULL)
	{
		printf("%d ", current->n);
		count++;
		current = current->next;
	}
	return (count);
}

