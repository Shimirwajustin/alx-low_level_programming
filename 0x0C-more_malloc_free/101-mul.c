#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
*is_digit - a function
*@s: an array
*Return: 1 or 0
*/
int is_digit(char *s)
{
int a = 0;

while (s[a])
{
if (s[a] < '0' || s[a] > '9')
return (0);
a++;
}
return (1);
}

/**
*_strlen - a function
*@s: an array
*Return: not always 0
*/
int _strlen(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}

return (a);
}

/**
* errors - a function
*/
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
*main - a function
*@argc: integer
*@argv: an array
*Return: always 0
*/
int main(int argc, char *argv[])
{
char *b, *c;
int d, e, f, g, h, j, k, *l, m = 0;
b = argv[1], c = argv[2];

if (argc != 3 || !is_digit(b) || !is_digit(c))
errors();
d = _strlen(b);
e = _strlen(c);
f = d + e + 1;
l = malloc(sizeof(int) * f);

if (!l)
return (1);

for (g = 0; g <= d + e; g++)
l[g] = 0;

for (d = d - 1; d >= 0; d--)
{
j = b[d] - '0';
h = 0;

for (e = _strlen(c) - 1; e >= 0; e--)
{
k = c[e] - '0';
h += l[d + e + 1] + (j * k);
l[d + e + 1] = h % 10;
h /= 10;
}

if (h > 0)
l[d + e + 1] += h;
}

for (g = 0; g < f - 1; g++)
{

if (l[g])
m = 1;

if (m)
_putchar(l[g] + '0');
}

if (!m)
_putchar('0');
_putchar('\n');
free(l);

return (0);
}

