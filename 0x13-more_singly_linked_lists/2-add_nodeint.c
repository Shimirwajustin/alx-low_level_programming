#include "lists.h"
/**
*add_nodeint - a function that adds a new node at the beginning of a list
*@head: pointer
*@n: data
*Return: return pointer or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *just;
just = malloc(sizeof(listint_t));
if (!just)
return (NULL);
just->n = n;
just->next = *head;
*head = just;
return (just);
}
