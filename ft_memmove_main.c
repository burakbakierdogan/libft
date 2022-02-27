#include <libft.h>

int	main(void)
{
	char *src = "burak";
	char dest[] = "baki";
	ft_memmove(dest,src,3);
	printf("%s", dest);
}
