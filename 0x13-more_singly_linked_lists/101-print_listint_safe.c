#include "lists.h"
/**
*print_listint_safe - a function
*@head: a pointer
*Return: not always 0
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *a = NULL;
const listint_t *b = NULL;
size_t c = 0;
size_t d;
a = head;
while (a)
{
printf("[%p] %d\n", (void *)a, a->n);
c++;
a = a->next;
b = head;
d = 0;
while (d < c)
{
if (a == b)
{
printf("-> [%p] %d\n", (void *)a, a->n);
return (c);
}
b = b->next;
d++;
}
if (!head)
exit(98);
}
return (c);
}
