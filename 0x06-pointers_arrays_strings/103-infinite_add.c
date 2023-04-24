#include "main.h"
/**
*mic - void function
*@n: array
*Return: 0
*/
void mic(char *n)
{
int a = 0;
int b = 0;
char fp;
while (*(n + a) != '\0')
{
a++;
}
a--;
for (b = 0; b < a; b++, a--)
{
fp = *(n + b);
*(n + b) = *(n + a);
*(n + a) = fp;
}
}
/**
*infinite_add - add 2 numbers together
*@n1: 1st array
*@n2: 2nd array
*@r: 3rd array
*@size_r: integer
*Return: return r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int jus = 0, a = 0, b = 0, shim = 0;
int just = 0, shimi = 0, kab = 0;
while (*(n1 + a) != '\0')
a++;
while (*(n2 + b) != '\0')
b++;
a--;
b--;
if (b >= size_r || a >= size_r)
return (0);

while (b >= size_r || a >= 0 || jus == 1)
{
if (a < 0)
just = 0;
else
just = *(n1 + a) -'0';
if (b < 0)
shimi = 0;
else
shimi  = *(n2 + b) -'0';
kab = just + shimi + jus;
if (kab >= 10)
jus = 1;
else
jus = 0;
if (shim >= (size_r - 1))
return (0);
*(r + shim) = (kab % 10) + '0';
shim++;
b++;
a++;
}
if (shim == size_r)
return (0);
*(r + shim) = '\0';
mic(r);
return (r);
}
