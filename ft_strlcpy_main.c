#include <libft.h>

int	main(void)
{
	char dest[] = "burak";
	char src[] = "baki";

	ft_strlcpy(dest,src,2);
	int i = printf("%s\n",dest);
	printf("%d",i);
}
