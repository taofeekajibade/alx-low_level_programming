#include "lists.h"
/**
 * poplistint - deletes the head nodes of a listint_t list
 * @head: pointer to the head node
 *
 * Return: data from the old head node, or 0 if the list is empty
 */
int poplistint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	listint_t *node = *head;
	int data = node->n;
	*head = node->next;
	free(node);

	return (data);
}
