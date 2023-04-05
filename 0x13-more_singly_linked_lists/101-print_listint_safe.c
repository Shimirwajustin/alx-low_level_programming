#include "lists.h"
/**
*print_listint_safe - a function that prints a linked list using a loop
*@head: pointer
*Return: return new node
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *shim = NULL;
const listint_t *fid = NULL;
size_t just = 0;
size_t mic;
shim = head;
while (shim)
{
printf("[%p]%d\n", (void *)shim, shim->n);
just++;
shim = shim->next;
fid = head;
mic = 0;
while (mic < just)
{
if (shim == fid)
{
printf("-> [%p] %d\n", (void *)shim, shim->n);
return (just);
}
fid = fid->next;
mic++;
}
if (!head)
exit(98);
}
return (just);
}
