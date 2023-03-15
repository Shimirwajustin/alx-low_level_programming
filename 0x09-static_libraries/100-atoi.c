#include "main.h"
#include <stdio.h>
/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: c & 0
*/
int _atoi(char *s)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int f = 0;
int e = 0;
while (s[d] != '\0')
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
e = s[a] - '0';
if (b % 2)
e = -e;
c = c * 10 + e;
f = 1;
if (s[a + 1] > '0' || s[a + 1] < '9')
break;
f = 0;
}
a++;
}
if (f == 0)
return (0);
return (c);
}
