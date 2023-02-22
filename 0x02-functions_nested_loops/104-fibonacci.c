#include <stdio.h>
#define LARGEST 10000000000
/*betty style doc for function main goes here*/
/**
 * main - main function
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * 
 * Return: 0
 */
int main(void)
{
unsigned long int fr1 = 0, k1 = 1, fr2 = 0, k2 = 2;
unsigned long int h1, h2, h3;
int count;
printf("%lu, %lu, ", k1, k2);
for (count = 2; count < 98; count++)
{
if (k1 + k2 > LARGEST || fr2 > 0 || fr1 > 0)
{
h1 = (k1 + k2) / LARGEST;
h2 = (k1 + k2) % LARGEST;
h3 = fr1 + fr2 + h1;
fr1 = fr2, fr2 = h3;
k1 = k2, k2 = h2;
printf("%lu%010lu", fr2, k2);
}
else
{
h2 = k1 + k2;
k1 = k2, k2 = h2;
printf("%lu", k2);
}
if (count != 97)
printf(", ");
}
printf("\n");
return (0);
}
