#include "lists.h"

/**
 * sum_listint - add all data of a listint_t linked list
 * @head: poiter to the head node
 *
 * Return: total of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
