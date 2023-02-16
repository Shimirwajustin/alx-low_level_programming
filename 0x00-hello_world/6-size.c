#include<stdio.h>
/**
*main entry point
*
*
*program always return 0
*/
int main(void)
{
char c;
int d;
long int ld;
long long int lld;
float f;
printf("size of char:%lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(ld));
printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(lld));
printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
