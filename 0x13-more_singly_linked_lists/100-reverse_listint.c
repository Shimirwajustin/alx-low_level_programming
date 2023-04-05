#include "lists.h"
/**
*reverse_listint - a function that reverse a linked list
*@head: pointer
*Return: function will return pointer
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *shim = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = shim;
shim = *head;
*head = next;
}
*head = shim;
return (*head);
}
