#include "main.h"
#include <stdlib.h>
/**
*free_grid - function
*@grid: integer 1
*@height: integer 2
*Return: no return
*/
void free_grid(int **grid, int height)
{
int a;
if (grid == NULL || height == 0)
return;
for (a = 0; a < height; a++)
free(grid[a]);
free(grid);
}
