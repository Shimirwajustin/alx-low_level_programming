#include "lists.h"
/**
*print_listint - a function that printselements of a linked list
*@h: linked list to print
*Return: not always 0
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
