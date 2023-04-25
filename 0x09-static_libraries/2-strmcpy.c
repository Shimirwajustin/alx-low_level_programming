#include "main.h"
/**
 *_strncpy - a function
 *@dest: 1st pointer
 *@src: 2nd pointer
 *@n: integer
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
