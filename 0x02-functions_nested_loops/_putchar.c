#include <unistd.h>
/**
*@c is the character to print
*
*return on success 1
*On error, -1 is returned, and error is set appropriatery.
*/
int _putchar(char c)
{
return(write(1,&c, 1));
}
