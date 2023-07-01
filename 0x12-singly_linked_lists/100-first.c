#include <stdio.h>
void beforefirst(void) __attribute__ ((constructor));

/**
*beforefirst - a function
*
*/
void beforefirst(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

