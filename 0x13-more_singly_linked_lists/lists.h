#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listsint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;




#endif
