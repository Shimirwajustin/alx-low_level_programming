#include "main.h"

/**
*get_endianness - a function
*Return: 1 or 0
*/
int get_endianness(void)
{
int num;
num = 1;
if (*(char *)&num == 1)
return (1);
else
return (0);
}
