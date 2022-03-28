#include <libft.h>

int	main (void)
{
	char s1[13] = "211burakaaaaa";
	char *set = "123";
	char *str = ft_strtrim(s1,set);
	printf("%s",str);
}
