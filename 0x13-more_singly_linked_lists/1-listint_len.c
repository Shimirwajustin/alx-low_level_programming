#include "lists.h"
/**
*listint_len - a function that returns number of elements in a linked lists
*@h: traversal linker
*Return: not always 0
*/
size_t listint_len(const listint_t *h)
{
size_t a = 0;
while (h)
{
a++;
h = h->next;
}
return (a);
}
