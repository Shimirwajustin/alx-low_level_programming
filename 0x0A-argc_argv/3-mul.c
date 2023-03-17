#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*main - a function
*@argc: argument
*@argv: argument of an array
*Return: always 0, 1(Error)
*/
int main(int argc, char argv[])
{
int a, b;
int result;
if(argc < 3 || argc > 3)
{
printf("Error\n");
return(1);
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
result = a*b;
printf("%d", result);
return (0);
}
