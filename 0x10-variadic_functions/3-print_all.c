#include "variadic_functions.h"
/**
*print_all - a function tha prints anything
*@format: argument
*Return: no return
*/
void print_all(const char * const format, ...)
{
int a = 0;
char *just, *shim = "";
va_list list;
va_start(list, format);

if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", shim, va_arg(list, int));
break;
case 'i':
printf("%s%d", shim, va_arg(list, int));
break;
case 'f':
printf("%s%f", shim, va_arg(list, double));
break;
case 's':
just = va_arg(list, char *);
if (!just)
just = "(nil)";
printf("%s%s", shim, just);
break;
default:
a++;
continue;
}
shim = ", ";
a++;
}
}
printf("\n");
va_end(list);
}
