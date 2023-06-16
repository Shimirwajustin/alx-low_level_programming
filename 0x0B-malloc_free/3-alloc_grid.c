#include "main.h"
#include <stdlib.h>
/**
***alloc_grid - function
*@width: integer 1
*@height: integer 2
*Return: not always 0
*/
int **alloc_grid(int width, int height)
{
int **a;
int b, c;

if (height <= 0 || width <= 0)
return (NULL);
a = (int **) malloc(sizeof(int *) * height);

if (a == NULL)
return (NULL);

for (b = 0; b < height; b++)
{
a[b] = (int *) malloc(sizeof(int) * width);

if (a[b]  == NULL)
{
free(a);

for (c = 0; c <= b; c++)
free(a[c]);
return (NULL);
}
}

for (b = 0; b < height; b++)
{
for (c = 0; c < width; c++)
{
a[b][c] = 0;
}
}
return (a);
}
