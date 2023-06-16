#include <stdlib.h>
#include "main.h"
/**
**str_concat - a function
*@s1: charb 1
*@s2: char 2
*Return: not always 0
*/
char *str_concat(char *s1, char *s2)
{
char *a;
unsigned int b, c, d, e;
b = 0;
c = 0;
d = 0;
e = 0;
while (s1 && s1[d])
d++;
while (s2 && s2[e])
e++;
a = malloc(sizeof(char) * (d + e + 1));

if (a == NULL)
return (NULL);
b = 0;
c = 0;

if (s1)
{
while (b < d)
{
a[b] = s1[b];
b++;
}
}
if (s2)
{
while (b < (d + e))
{
a[b] = s2[c];
b++;
c++;
}
}
a[b] = '\0';
return (a);
}

