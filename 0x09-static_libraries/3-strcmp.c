#include "main.h"
/**
*_strcmp - a function
*@s1: 1st pointer
*@s2: 2st pointer
*Return: pointer
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
