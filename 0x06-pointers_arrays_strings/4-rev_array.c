#include "main.h"
/**
* reverse_array - void function
*@a: an array
*@n: an integer
*Return: no return
*/
void reverse_array(int *a, int n)
{
int ab, c, d;
c = n - 1;
for (ab = 0; ab < n / 2; ab++)
{
d = a[ab];
a[ab] = a[c];
a[c--] = d;
}
}
