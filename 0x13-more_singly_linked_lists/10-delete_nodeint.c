#include "lists.h"
/**
* delete_nodeint_at_index - a function to delete a node at index
*@head: pointer
*@index: node to be deletedd
*Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *shim = *head;
listint_t *just = NULL;
unsigned int a = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(shim);
return (1);
}
while (a < index - 1)
{
if (!shim || !(shim->next))
return (-1);
shim = shim->next;
a++;
}
just = shim->next;
shim->next = just->next;
free(just);
return (1);
}
