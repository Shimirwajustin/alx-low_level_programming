#include "lists.h"
/**
 *free_listint_safe - a function that frees a linked list
 *@h: pointer
 *Return: not always 0
 *Description: free a linked list
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int just;
listint_t *shim;
if (!h || !*h)
return (0);
while (*h)
{
just = *h - (*h)->next;
if (just > 0)
{
shim = (*h)->next;
free(*h);
*h = shim;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
