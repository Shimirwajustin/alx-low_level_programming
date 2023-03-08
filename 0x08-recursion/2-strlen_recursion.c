#include "main.h"
#include <string.h>
/**
*
*_strlen_recursion - a function that returns the length of a string
*@s: input
*Return: Always 0
*/
int _strlen_recursion(char *s)
{
char a[100];
*s = a;
char b;
b = 0;
while (*s != '\0')
{
b++;
s++;
}
_putchar(b);
return (0);
}
