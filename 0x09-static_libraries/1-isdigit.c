#include "main.h"
#include <stdio.h>
/*betty style*/
/**
*_isdigit - upper case letters
*@c: the character we have to check
*Return: 1 and 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
