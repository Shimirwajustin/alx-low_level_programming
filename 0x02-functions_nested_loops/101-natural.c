#include <stdio.h>
/*betty style doc for function main goes here*/
/**
*main - the main function
*
*Return: always 0
*/
int main(void)
{
int a;
int sum;
for (a = 0; a < 1024; a++)
{
if ((a % 3 == 0) || (a % 5 == 0)
{
sum = sum + a;
}
}
printf("%d\n", sum);
return (0);
}
