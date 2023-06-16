#include "main.h"
#include <stdlib.h>
/**
**create_array - a function
*@size: integer
*@c: character
*Return: not always 0
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b;
b = 0;
if (size == 0)
return (NULL);
a = (char *) malloc(sizeof(char) * size);
if (a == NULL)
return (0);
while (b < size)
{
*(a + b) = c;
b++;
}
*(a + b) = '\0';
return (a);
}
