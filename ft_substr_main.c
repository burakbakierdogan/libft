#include <libft.h>

int	main (void)
{
	char str[] = "burak";
	char *sr = ft_substr(str,3,6);
	printf("%s",sr);
	free(sr);
}
