#include <stdlib.h>
/**
*main - function
*@argc: argument
*@argv: pointer
*Return: 0
*/
int main(int argc, char *argv[])
{
int a, b, c;
char d;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
d = *argv[2];
if ((d == '/' || d == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
c = func(a, b);
printf("%d\n", c);
return (0);
}
