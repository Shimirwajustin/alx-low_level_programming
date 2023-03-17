#include "main.h"
#include <stdio.h>
/**
*shimirwa - a function to  convert string into an integer
*@s: character
*Return: 0 and n
*/
int shimirwa(char *s)
{
int c, d, n, l, f, t;

c = 0;
d = 0;
n = 0;
l = 0;
f = 0;
t = 0;

while (s[l] != '\0')
l++;

while (c < l && f == 0)
{
if (s[c] == '-')
++d;

if (s[c] >= '0' && s[c] <= '9')
{
t = s[c] - '0';

if (d % 2)
t = -t;
n = n * 10 + t;
f = 1;

if (s[c + 1] < '0' || s[c + 1] > '9')
break;
f = 0;
}
c++;
}

if (f == 0)
return (0);
return (n);
}

/**
*main - a function
*@argc: argument
*@argv: argument of an array
*Return: not always 0, 1 anError
*/
int main(int argc, char *argv[])
{
int a, b, solution;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = shimirwa(argv[1]);
b = shimirwa(argv[2]);
solution = a * b;
printf("%d\n", solution);
return (0);
}