#include "main.h"
/* betty style doc for function main goes there */
/**
*print_alphabet_x10 - alphabet function
*putchar:print the alphabets in lowercase
*Return: Always 0
*/
void print_alphabet_x10(void)
{
char a, b;
for (a = 0; a <= 10; a++)
{
for (b = 'a'; b <= 'z'; b++)
_putchar(b);
_putchar('\n');
}
}
