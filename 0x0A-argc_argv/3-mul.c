#include <stdio.h>
#include <stdlib.h>

/**
*main - function
*@argc: integer
*@argv: array
*Return: 1 or 0
*/
int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("error\n");
return 1;
}
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = a * b;
printf("%d\n", c);
return 0;
}

