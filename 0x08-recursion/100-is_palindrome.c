#include "main.h"
/**
*is_palindrome - a function
*@s: an array
*Return: 1 or a function
*/
int recursion(char *s);
int pal(char *s, int a, int b);
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (pal(s, 0, recursion(s)));
}
/**
*recursion - a function
*@s: an array
* Return: string
*/
int recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + recursion(s + 1));
}
/**
*pal - a function
*@s: a character
*@a: 1st integer
*@b: 2nd integer
*Return: 1, 0 and function
*/
int pal(char *s, int a, int b)
{
if (*(s + a) != *(s + b - 1))
return (0);
if (a >= b)
return (1);
return (pal(s, a + 1, b - 1));
}
