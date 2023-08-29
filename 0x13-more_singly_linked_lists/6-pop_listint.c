#include "lists.h"
/**
 * pop_listint - deletes the head nodes of a listint_t list
 * @head: pointer to the head node
 *
 * Return: data from the old head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{

	listint_t *node;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	node = *head;
	data = node->n;
	*head = (*head)->next;
	free(node);

	return (data);
}
