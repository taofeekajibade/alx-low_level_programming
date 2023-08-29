#include "lists.h"

/**
 * add_nodeint_end - add nodes at the end of the linked list
 * @head: pointer to the head node of the linked list
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL if memory allocation failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
