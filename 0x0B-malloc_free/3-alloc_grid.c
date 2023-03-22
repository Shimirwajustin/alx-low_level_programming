#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - a function
*@width: an argument
*@height: an argument
*Return: pointer and array
*/
int **alloc_grid(int width, int height)
{
int **just;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
just = malloc(sizeof(int *) * height);
if (just == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
just[a] = malloc((sizeof(int) * width));
if (just[a] == NULL)
{
for (; a >= 0; a--)
free(just[a]);
free(just);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
just[a][b] = 0;
}
return (just);
}
