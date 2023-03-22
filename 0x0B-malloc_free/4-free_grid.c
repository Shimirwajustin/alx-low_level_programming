#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_grid - a function
*@grid: an argument of array
*@height: an argument
*Return: nothing
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
