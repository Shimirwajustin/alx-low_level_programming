#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*shimirwa - function
*@just: character
*Return: not always 0
*/
int shimirwa(char *just)
{
unsigned int t;
t = 0;
while (t < strlen(just))/*count string*/
{
if (!isdigit(just[t])) /*to check if there are digitin just*/
{
return (0);
}
t++;
}
return (1);
}

/**
*main - a main function
*@argc: an argument
*@argv: an argument of array
*Return: always 0
*/
int main(int argc, char *argv[])
{
int t;
int a;
int sum = 0;
t = 1;
while (t < argc)
{
if (shimirwa(argv[t]))
{
a = atoi(argv[t]);
sum += a;
}
/*if one of the number contains symbols that are not digit*/
else
{
printf("Error\n");
return (1);
}
t++;
}
printf("%d\n", sum);
return (0);
}
