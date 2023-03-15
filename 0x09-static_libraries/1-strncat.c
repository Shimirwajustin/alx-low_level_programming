/**
* _strncat - a function that concatenates two strings.
*@dest: string
*@src: string
*@n: integer
* Return: dest.
*/
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = 0;
while ( dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}

