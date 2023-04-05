#include "lists.h"
/**
 *pop_listint - a function that deletes the head node
 *@head: pointer
 *Return: data or 0
 */
int pop_listint(listint_t **head)
{
listint_t *shim;
int n;
if (!head || !*head)
return (0);
n = (*head)->n;
shim = (*head)->next;
free(*head);
*head = shim;
return (n);
}
