#include<stdio.h>
/*
*file name = 102-print_comb5.c
*
*Auth: Shimirwa Justin
*/

/**
*main - Prints all possible combinations of two two-digit numbers,
* ranging from 0-99, separated by a comma followed by a space.
*
 * Return: Always 0.
 */
int main(void)
{
int c, h, j;
for (c = 0; c < 8; c++)
{
for (h = c + 1; h < 9; h++)
{
for (j = h + 1; j < 10; j++)
{
putchar((c % 10) + '0');
putchar((h % 10) + '0');
putchar((j % 10) + '0');
if (c == 7 && h == 8 && j == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
