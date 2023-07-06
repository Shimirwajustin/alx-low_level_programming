#include "lists.h"

/**
*pop_listint - a function
*@head: a pointer
*Return: not always 0
*/
int pop_listint(listint_t **head)
{
listint_t *a;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
a = (*head)->next;
free(*head);
*head = a;
return (num);
}
