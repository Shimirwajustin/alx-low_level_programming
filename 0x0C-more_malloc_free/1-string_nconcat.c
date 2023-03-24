#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - function
*@s1: string 1
*@s2: string 2
*@n: integer argument
*Return: not return 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *just;
unsigned int a = 0, b = 0, c = 0, d = 0;
while (s1 && s1[c])
c++;

while (s2 && s2[d])
d++;

if (n < d)
just = malloc(sizeof(char) * (c + n + 1));
else
just = malloc(sizeof(char) * (c + d + 1));

if (!just)
return (NULL);

while (a < c)
{
just[a] = s1[a];
a++;
}

while (n < d && a < (c + n))
just[a++] = s2[b++];

while (n >= d && a < (c + d))
just[a++] = s2[b++];
just[a] = '\0';

return (just);
}
