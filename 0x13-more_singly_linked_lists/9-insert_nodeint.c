#include "lists.h"
/**
*insert_nodeint_at_index - a function that insert new node
*any where in linked list
*@head: pointer
*@idx: index
*@n: data
*Return: pointer or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *just;
listint_t *shim = *head;
just = malloc(sizeof(listint_t));
if (!just || !head)
return (NULL);
just->n = n;
just->next = NULL;
if (idx == 0)
{
just->next = *head;
*head = just;
return (just);
}
for (a = 0; shim && a < idx; a++)
{
if (a == idx - 1)
{
just->next = shim->next;
shim->next = just;
return (just);
}
else
shim = shim->next;
}
return (NULL);
}
