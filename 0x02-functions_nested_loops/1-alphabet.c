#include "main.h"
/* betty style doc for function main goes there */
/**
*print_alphabet -alphabet function
*putchar:print the alphabets in lowercase
*Return: Always 0
*/
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
