#include "lists.h"

/**
*free_listint - a function
*@head: a pointer
 */
void free_listint(listint_t *head)
{
listint_t *a;
while (head)
{
a = head->next;
free(head);
head = a;
}
}
