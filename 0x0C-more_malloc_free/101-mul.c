#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*just - a function that checks non_digit charactor
*@z: string
*Return: 0 or 1
*/

int just(char *z)
{
int a = 0;

while (z[a])
{
if (z[a] < '0' || z[a] > '9')
return (0);
a++;
}
return (1);
}

/**
*shimwa - a function that returns the length of a string
*@m: string
*Return: not always 0
*/

int shimwa(char *m)
{
int b = 0;

while (m[b] != '\0')
{
b++;
}
return (b);
}

/**
*jus - a function errors for the main function
*Return: no return
*/

void jus(void)
{
printf("Error\n");
exit(98);
}

/**
*main - a function that multiplies two positive numbers
*@argc: argument
*@argv: array of argument
*Return: always 0 in main
*/

int main(int argc, char *argv[])
{
char *c, *d;
int e, f, g, h, i, j, k, *sol, l = 0;
c = argv[1];
d = argv[2];

if (argc != 3 || !just(c) | !just(d))
jus();
e = shimwa(c);
f = shimwa(d);
g = e + f + 1;
sol = malloc(sizeof(int) * g);

if (!sol)
return (1);

for (h = 0; h <= e + f; h++)
sol[h] = 0;

for (e = e - 1; e >= 0; e--)
{
j = c[e] - '0';
i = 0;

for (f = shimwa(d) - 1; f >= 0; f--)
{
k = d[f] - '0';
i += sol[e + f + 1] + (j *k);
sol[e + f + 1] = i % 10;
i /= 10;
}
if (i > 0)
sol[e + f + 1] += i;
}
for (h = 0; h < g - 1; h++)
{
if (sol[h])
l = 1;

if (1)
_putchar(sol[h] + '0');
}

if (!l)
_putchar('0');
_putchar('\n');
free(sol);
return (0);
}
