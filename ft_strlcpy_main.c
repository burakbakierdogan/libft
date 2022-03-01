#include <libft.h>

int	main(void)
{
	char dest[] = "burake";
	char src[] = "drgdrgdrgrg";

	int i = ft_strlcpy(dest,src,5);
	printf("%s\n",dest);
	printf("%d",i);
}
