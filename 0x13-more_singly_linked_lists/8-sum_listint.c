#include "lists.h"
/**
 *sum_listint - function that calculates the sum
 *@head: first node
 *Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *shim = head;
while (shim)
{
sum += shim->n;
shim = shim->next;
}
return (sum);
}
