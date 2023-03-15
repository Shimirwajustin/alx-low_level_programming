#include "main.h"
/* betty style doc for function main goes there */
/**
*_isalpha - alphabet function
*@c: character to be printed
*Return: Always 0
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
