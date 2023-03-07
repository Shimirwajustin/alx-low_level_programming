#include "main.h"
/**
*_strspn - intry point
*@s:input
*@accept: input
*Return: always a
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int r;
while(*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
a++;
break;
}
else if (accept[r + 1] == '\0')
return (a);
}
s++;
}
return (a)
}
