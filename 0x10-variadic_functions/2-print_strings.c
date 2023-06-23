#include "variadic_functions.h"
/**
*print_strings - a function
*@separator: a pointer
*@n: an integer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a;
char *b;
va_list c;
va_start(c, n);
for (a = 0; a < n; a++)
{
b = va_arg(c, char *);
if (!b)
b = "(nil)";
if (!separator)
printf("%s", b);
else if (separator && a == 0)
printf("%s", b);
else
printf("%s%s", separator, b);
}
printf("\n");
va_end(c);
}

