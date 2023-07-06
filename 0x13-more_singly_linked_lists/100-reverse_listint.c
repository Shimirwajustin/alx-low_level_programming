#include "lists.h"

/**
*reverse_listint - a function
*@head: a pointer
*Return: not always 0
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = next;
next = *head;
*head = next;
}
*head = next;
return (*head);
}
