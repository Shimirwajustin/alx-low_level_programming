#include "variadic_functions.h"
/**
*print_all - a function
*@format: a pointer
*/
void print_all(const char * const format, ...)
{
int a = 0;
char *b, *c = "";

va_list d;

va_start(d, format);

if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", c, va_arg(d, int));
break;
case 'i':
printf("%s%d", c, va_arg(d, int));
break;
case 'f':
printf("%s%f", c, va_arg(d, double));
break;
case 's':
b = va_arg(d, char *);
if (!b)
b = "(nil)";
printf("%s%s", c, b);
break;
default:
a++;
continue;
}
c = ", ";
a++;
}
}

printf("\n");
va_end(d);
}
