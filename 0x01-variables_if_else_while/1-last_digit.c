#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - determines whether randomly generated number is odd or even
*
*Return: 0 if program executes succesfuly
*/
int main(void)
{
	int n;
    int r;
     
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    r = n % 10;
    if (r > 5)
        printf("Last digit of %d is %d and is greater than 5\n", n, r);
    else if (r == 0)
            printf("Last digit of %d is %d and is 0\n", n, r);
    else if (r < 6 && r == 0)
            printf("Last digit of %d is %d and is less than 6 and not 0", n, r);
    
    return (0);
}
