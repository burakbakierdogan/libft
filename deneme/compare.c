#include <stdio.h>

int	main (void)
{
	int	a;
	int	b;
	int c;

	a = 1;
	b = 2;
	c = 3;
if (a / b <= 1)
		c = b;
		else
		c = a;
printf("%d\n",c);

c = (a / b <= 1) ? b : a;
printf("%d",c);
}
