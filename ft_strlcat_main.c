#include <libft.h>

int	main(void)
{
	char dest[10];
	char src[5] = "burak";
	int a = ft_strlcat(dest,src,sizeof(dest));
	  printf("%s", dest);
	return (0);
}
