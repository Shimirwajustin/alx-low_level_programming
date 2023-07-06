#include "lists.h"

/**
*sum_listint - a function
*@head: a pointer
*Return: not always 0
*/
int sum_listint(listint_t *head)
{
int a = 0;
listint_t *b = head;
while (b)
{
a += b->n;
b = b->next;
}
return (a);
}
