#include <libft.h>

int	main (void)
{
	char s1[] = "burak";
	char *set = "lpl";
	char *str = ft_strtrim(s1,set);
	printf("%s",str);
}
