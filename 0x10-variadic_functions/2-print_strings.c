#include "variadic_functions.h"
/**
*print_strings - a function that prints strings
*@separator: string
*@n: argument
*Return: not return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsign int a;
char *just;
va_list list;
va_start(list, n);
for (a = 0; a < n; a++)
{
just = va_arg(list, char *);
if (!just)
just = "(nil)";
if (!separator)
printf("%s", just);
else if (separator && i == 0)
printf("%s", just);
else
printf("%s%s", separator, just);
}
printf("\n");
va_end(list);
}
