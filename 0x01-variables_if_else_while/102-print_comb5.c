/*file name = 102-print_comb5.c
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
int c, h;
for (c = 0; c <= 98; c++)
{
for (h = c + 1; h <= 99; h++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
putchar((h / 10) + '0');
putchar((c % 10) + '0');
if (c == 98 &&& h == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
