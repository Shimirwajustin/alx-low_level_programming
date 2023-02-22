#include "main.h"

/* betty style doc for function main goes there */
/**
*print_last_digit - checks for last digit
*
*@i: function checked
*
*Return: j
*/
int print_last_digit(int i)
{
int j;
j = i % 10;
if (i < 0)
j = -j;
return (j);
}
