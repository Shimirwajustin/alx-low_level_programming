#include "lists.h"

/**
*find_listint_loop - a function
*@head: a pointer
*Return: not always 0
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *a = head;
listint_t *b = head;
if (!head)
return (NULL);
while (a && b && b->next)
{
b = b->next->next;
a = a->next;
if (b == a)
{
a = head;
while (a != b)
{
a = a->next;
b = b->next;
}
return (b);
}
}
return (NULL);
}
