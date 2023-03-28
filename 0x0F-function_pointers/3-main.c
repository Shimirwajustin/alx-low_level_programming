#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*main - main program
*@argc: argument
*@argv: an array
*Return: always 0 in main function
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int t, y;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
t = atoi(argv[1]);
op = argv[2];
y = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && y == 0) || (*op == '%' && y == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(t, y));
return (0);
}
