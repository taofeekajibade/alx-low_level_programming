#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head node
 * @idx: index at which to add node
 * @n: node data value
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		free (new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		new_node->n = n;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
		{
			free (new_node);
			return (NULL);
		}
		current = current->next;
	}
	if (current->next == NULL)
	{
		current->next = new_node;
		new_node->n = n;
		return (new_node);
	}
	new_node->next = current->next;
	current->next = new_node;
	new_node->n = n;
	return (new_node);
}
