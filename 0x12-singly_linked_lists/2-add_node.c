#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - function that adds a new node at the begining of a linked list
 *@head: double pointer
 *@str: new string
 *Return: not always 0
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
