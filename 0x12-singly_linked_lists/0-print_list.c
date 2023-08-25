#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%s\n", h->str == NULL ? "[0] (nil)" : h->str);
        h = h->next;
        count++;
    }

    return (count);
}
