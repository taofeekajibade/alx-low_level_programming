# 0x12. C - Singly linked lists

## Definition
> A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.

## Tasks:
0. **Print List:** Write a function that prints all the elements of a `list_t` list.

1. **List Lenght:** Write a function that returns the number of elements in a linked `list_t` list.

2. **Add Node:** Write a function that adds a new node at the beginning of a `list_t` list.

3. **Add node at the end:** Write a function that adds a new node at the end of a `list_t` list.

4. **Free List:** Write a function that frees a `list_t` list.
5. **The Hare and the Tortoise:** Write a function that prints *You're beat! and yet, you must allow,\n I bore my house upon my back!\\n  before the `main` function is executed.*

6. **Real programmers can write assembly code in any language:** Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

### The Structure of a node
> A node consists of two parts: the data and the pointer (to next data). Below is a sample structure of a node:

```C
/* Define a structure for a node */
struct myNode {
  int data; /* The data part */
  struct myNode* next; /* The pointer part */
};

/* Create a new node with given data and pointer */

struct myNode* newNode(int data, struct myNode* next) {
  struct myNode* current_node = malloc(sizeof(struct myNode)); /* Allocate memory for the node */
  current_node->data = data; /* Set the data value */
  current_node->next = next; /* Set the pointer */
  return (current_node); /* Return the node */
}

/* Create a sample list with three nodes */
struct myNode* head = newNode(10, NULL); /* Create the head node with data 10 and pointer NULL */
head->next = newNode(20, NULL); /* Create the second node with data 20 and pointer NULL and link it to the head */
head->next->next = newNode(30, NULL); /* Create the third node with data 30 and pointer NULL and link it to the second node */
```

> [Twitter: Taofeek Ajibade](https://www.twitter.com/taofeekajibade)
