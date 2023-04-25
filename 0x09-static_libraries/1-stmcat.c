#include "main.h"
/**
 *_strncat - a function
 *@dest: 1st array
 *@src: 2nd array
 *@n: integer
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0' && b < n)
{
dest [a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
