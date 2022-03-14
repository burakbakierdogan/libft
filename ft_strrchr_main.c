#include <libft.h>

int	main (void)
{
	char a[6] = "barak";
	int b = 97;
	char *c = ft_strrchr (a,b);
	printf("%s",c);
}
