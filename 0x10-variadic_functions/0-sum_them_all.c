#include "variadic_function.h"
/**
*sum_them_all - a function
*@n: an integer
*Return: not always 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int a;
int add = 0;
va_list b;
va_list(list, n);
for (a = 0; a < n; a++)
add += va_arg(list, int);
va_end(b);
return (add);
}
