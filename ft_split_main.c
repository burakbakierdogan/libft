#include <libft.h>

int	main(void)
{
	char *a= "burak";
	char b = 'u';
	char c[6] = ft_split(a,b);
	printf("%s", c);
}
