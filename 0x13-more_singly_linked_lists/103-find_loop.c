#include "lists.h"
/**
*find_listint_loop - a function that finds the loop in a linked list
*@head: linked list
*Return: address or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *just = head;
listint_t *fid = head;
if (!head)
return (NULL);
while (just && fid && fid->next)
{
fid = fid->next->next;
just = just->next;
if (fid == just)
{
just = head;
while (just != fid)
{
just = just->next;
fid = fid->next;
}
return (fid);
}
}
return (NULL);
}
