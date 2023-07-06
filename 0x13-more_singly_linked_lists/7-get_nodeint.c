#include "lists.h"

/**
*get_nodeint_at_index - a function
*@head: a pointer
*@index: integer
*Return: not always 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *b = head;
while (b && a < index)
{
b = b->next;
a++;
}
return (b ? b : NULL);
}
