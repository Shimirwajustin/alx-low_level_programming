#include "main.h"
/**
*rot13 - a function
*@s: An array
*Return: array
*/
char *rot13(char *s)
{
int a, b;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; c[b] != '\0'; b++)
{
if (s[a] == c[b])
{
s[a] = d[b];
break;
}
}
}
return (s);
}
