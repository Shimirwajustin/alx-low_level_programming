#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memcpy - a function that copies memory area
*@dest:the memory store
*@src: store memory copy.
*@n: Number of bytes
*Return: memory copy
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
