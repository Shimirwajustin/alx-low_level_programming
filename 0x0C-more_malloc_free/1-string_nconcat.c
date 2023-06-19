#include"main.h"
#include <stdlib.h>
/**
**string_nconcat - a function
*@s1: array 1
*@s2: array 2
*@n: integer
*Return: not always 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int b = 0, c = 0, d = 0,e = 0;

while (s1 && s1[d])
d++;

while (s2 && s2[e])
e++;

if (n < e)
a = malloc(sizeof(char) * (d + n + 1));

else
a = malloc(sizeof(char) * (d + e + 1));

if (!a)
return (NULL);

while (b < d)
{
a[b] = s1[b];
b++;
}

while (n < e && b < (d + n))
a[b++] = s2[c++];

while (n >= e && b < (d + e))
a[b++] = s2[c++];
a[b] = '\0';

return (a);
}
