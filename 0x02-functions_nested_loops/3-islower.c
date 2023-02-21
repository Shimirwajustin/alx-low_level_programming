#include "main.h"
/* betty style doc for function main goes there */
/**
*_islower - alphabet function
*putchar:print the alphabets in lowercase
*Return: Always 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
