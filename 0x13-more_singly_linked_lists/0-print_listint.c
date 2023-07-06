#include "lists.h"

/**
*print_listint - a function
*@h: a pointer
*Return: a node
*/
size_t print_listint(const listint_t *h)
{
size_t a = 0;
while (h)
{
printf("%d\n", h->n);
a++;
h = h->next;
}
return (a);
}
