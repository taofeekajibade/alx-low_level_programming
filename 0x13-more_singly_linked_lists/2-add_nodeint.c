#include "lists.h"

/**
 * add_nodeint - adds new nodes
 * @head: pointer to the head of node of the list
 * @n: data for the new node of the list
 *
 * Return: address of the new node ot NULL if memory allocation failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
