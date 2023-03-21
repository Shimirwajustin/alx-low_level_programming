#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*create_array - function
*@size: input
*@c: input
*Retirn: not always 0
*/
char *create_array(unsigned int size, char c)
{
char *j;
unsigned int s;
j = malloc(sizeof(char) * size);

if (size == 0 || j == NULL)
return (NULL);
for (s = 0; s < size; s++)
j[s] = c;
return (j);
}
