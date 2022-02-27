#include <stdio.h>
int	main (void)
{
int a = 2;
int b = 4;
int c = ( a > b ) ? (6) : (b < 10 ? (3) : (5));
printf("%d", c);
}
