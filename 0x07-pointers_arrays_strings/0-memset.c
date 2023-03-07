#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memset -a function that fills memory with a constant byte.
*@s: the address memory
*@b: the disired value
*@n: bytes of the memory area
*Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
