#include <stdlib.h>
#include <stdio.h>

int	main (void)
{
	int *ptr;

	ptr = (int *) malloc(sizeof(char));
	for (int i = 0; i < 5; i++)
	{
		ptr[i]= i;
	}
	for (int t =0; t < 5; t++)
	{
		printf("%d\n",ptr[t]);
	}

}
