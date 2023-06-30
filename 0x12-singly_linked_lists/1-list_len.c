#include <stdlib.h>
#include "lists.h"

/**
*list_len - a function
*@h: a pointer
*Return: not always 0
*/
size_t list_len(const list_t *h)
{
size_t a = 0;
while (h)
{
a++;
h = h->next;
}
return (a);
}
