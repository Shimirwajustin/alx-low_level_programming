/**
*_memcpy - a function that copies memory area
*@dest:the memory store
*@src: store memory copy.
*@n: Number of bytes
*Return: memory copy
*/
#include "main.h"
#include <stdio.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (; a < b; a++)
{
dest[a] = src[a];
a++;
}
return (dest);
}
