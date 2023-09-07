#include "main.h"
#include <stdio.h>
/**
*binary_to_uint - a function
*@b: a character
*Return: an integer
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int a, c;
int d;
if (b == NULL)
return (0);
for (d = 0; b[d]; d++)
{
if (b[d] != '0' && b[d] != '1')
return (0);
}
for (c = 1, a = 0, d--; d >= 0; d--, c *= 2)
{
if (b[d] == '1')
a += c;
}
return (a);
}
