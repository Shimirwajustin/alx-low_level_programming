#include <stdio.h>

/*betty style doc for function main goes here*/
/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int c;
unsigned long fib1 = 0, fib2 = 1, sum;
for (c = 0; c < 50; c++)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
