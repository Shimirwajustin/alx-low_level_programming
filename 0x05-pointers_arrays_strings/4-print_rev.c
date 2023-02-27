#include "main.h"

/**
* print_rev - to print reverse
*
* Return: void
*/
void print_rev(char *s)
{
int leng = 0;
int a;
while (s[leng] != '\0')
{
leng++;
}
a = leng - 1;
for (; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
