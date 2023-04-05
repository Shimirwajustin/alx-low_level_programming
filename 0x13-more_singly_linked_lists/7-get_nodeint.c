#include "lists.h"
/**
 *get_nodeint_at_index - a function that returns the node
 *@head: first node
 *@index: index of the node
 *Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *shim = head;
while (shim && a < index)
{
shim = shim->next;
a++;
}
return (shim ? shim : NULL);
}
