#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *ptr =(char *) malloc(4 * sizeof(char));
	ptr[2] = 'b';
	printf("%c", ptr[3]);
}
