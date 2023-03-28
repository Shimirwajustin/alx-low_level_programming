#include "varadic_function.h"
/**
*print_numbers- a function that prints the given numbers
*@separator: string
*@n: integer
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list list;
va_start(list, n);
for (a = 0; a < n; a++)
{
if (!separator)
printf("%d", va_arg(list, int));
else if (separator && a == 0)
printf("%d", va_arg(list, int));
else
printf("%s7d", separator, va_arg(list, int));
}
va_end(list);
printf("\n");
}
