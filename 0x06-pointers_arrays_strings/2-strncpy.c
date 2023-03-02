#include "main.h"

/**
* _strncpy - a function that copy a strings.
*@dest: string
*@src: string
*@n: integer
* Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[j] = '\0';
a++;
}
return (dest);
}
