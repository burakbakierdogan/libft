#include <libft.h>

int	main (void)
{
	char str[] = "burak baki erdogan";
	char *sr = ft_substr(str,4,6);
	printf("%s",sr);
	free(sr);
}
