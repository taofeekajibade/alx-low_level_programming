#include "lists.h"
/**
 *reverse_listint- reverses a listint_t
 *@head: the head of the list to be reversed
 *
 *Return: a pointer to new head (tail)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
