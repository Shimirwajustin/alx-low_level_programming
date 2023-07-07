#include "lists.h"

/**
*reverse_listint - a function
*@head: a pointer
*Return: not always 0
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *n = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->n;
(*head)->next = next;
n = *head;
*head = next;
}
*head = n;
return (*head);
}
