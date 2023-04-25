#include "main..h"
/**
 *_memcpy - a function
 *@dest: 1st array
 *@src: 2nd array
 *@n: integer
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
