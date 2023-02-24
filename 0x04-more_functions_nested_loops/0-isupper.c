#include <stdio.h>
#include "main.h"

/*betty style*/
/**
*_isupper - upper case letters
*@c: the character we have to check
*Return: 1 and 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
