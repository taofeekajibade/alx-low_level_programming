#include "lists.h"
/**
 * add_node - adds a new node at the beginning.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current_node;
	size_t i;

	current_node = malloc(sizeof(list_t));
	if (current_node == NULL)
		return (NULL);

	current_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	current_node->len = i;
	current_node->next = *head;
	*head = current_node;

	return (*head);
}
