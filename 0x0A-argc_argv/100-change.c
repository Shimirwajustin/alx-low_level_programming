#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - a main function
*@argc:an argument
*@argv:an argument of array
*Return:0,1 and Error
*/
int main(int argc, char *argv[])
{
int a, b, result;
int c[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
result = 0;

if (a < 0)
{
printf("0\n");
return (0);
}
for (b = 0; b < 5 && a >= 0; b++)
{
while (a >= c[b])
{
result++;
a -= c[b];
}
}
printf("%d\n", result);
return (0);
}
