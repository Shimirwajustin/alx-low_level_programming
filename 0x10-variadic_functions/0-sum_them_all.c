#include "variadic_functions.h"
/**
*sum_them_all - function that calculate the sum
*@n: argument
*Return: return result
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int a;
int result = 0;
va_list list;
va_start(list, n);
for (; a < n; a++)
result += va_arg(list, int);
va_end(list);
return (result);
}
