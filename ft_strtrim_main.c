#include <libft.h>

int	main (void)
{
	char s1[] = "burak";
	char *set = "b";
	char *str = ft_strtrim(s1,set);
	printf("%s",str);
}
