#include "lists.h"
/**
 *free_listint2 - a function that free a linked list
 *@head: pointer
 */
void free_listint2(listint_t **head)
{
listint_t *just;
if (head == NULL)
return;
while (*head)
{
just = (*head)->next;
free(*head);
*head = just;
}
*head = NULL;
}
