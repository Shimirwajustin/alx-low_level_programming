#include "lists.h"
/**
 *add_nodeint_end - a function that add a node at the end of the linked list
 *@head: pointer
 *@n: data
 *Return: pointer or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *just;
listint_t *shim = *head;
just = malloc(sizeof(listint_t));
if (!just)
return (NULL);
just->n = n;
just->next = NULL;
if (*head == NULL)
{
*head = just;
return (just);
}
while (shim->next)
shim = shim->next;
shim->next = just;
return (just);
}
