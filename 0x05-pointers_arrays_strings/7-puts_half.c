#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
int a, b, rango;
rango = 0;
for (a = 0; str[a] != '\0'; a++)
rango++;
b = (rango / 2);
if ((rango % 2) == 1)
b = ((rango + 1) / 2);
for (a = b; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
