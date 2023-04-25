#include "main.h"
#include <stdio.h>
/**
*_strchr - a function
*@s: array
*@c: a character
*Return: null
*/
char *_strchr(char *s, char c)
{
int b;
while (1)
{
b = *s++;
if (b == c)
{
return (s - 1);
}
if (b == 0)
{
return (NULL);
}
}
}
