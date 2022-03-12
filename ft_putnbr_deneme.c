#include <unistd.h>
#include <stdio.h>
char	putnbr2(int n)
{
	if (n < 10)
	{
		n = n + 48;
		write (1,&n,1);
		return(555);
	}
	if (n > 10)
	{
		putnbr2(n/10);
		putnbr2(n % 10) ;
	}
	return n;
}
int	main (void)
{
	int n = putnbr2(999089);
	printf("\n%d",n);
}
