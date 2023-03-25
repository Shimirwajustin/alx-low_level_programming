#include "3-calc.h"
/**
*main - main program
*@argc: argument
*@argv: an array
*Return: always 0 in main function
*/
int main(int argc, char *argv[])
{
int t, y, sol;
char c;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
t = atoi(arg[1]);
y = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
c = *argv[2];
if ((c == '/' || c == '%') && y == 0)
{
printf("Error\n");
exit(100);
}
sol = func(t, y);
return (0);
}
