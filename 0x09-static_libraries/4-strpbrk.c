#include "main.h"
#include <stio.h>
/**
 *_strpbrk - function
 *@s: 1st pointer
 *@accept: 2nd pointer
 *Return: null
 */
char *_strpbrk(char *s, char *accept)
{
int a, b;
for (a = 0; *S != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (*s == accept[b])
{
return (s);
}
}
s++;
}
return (NULL);
}
