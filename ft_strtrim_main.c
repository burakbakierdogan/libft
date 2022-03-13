#include <libft.h>

int	main (void)
{
	char s1[] = "burak baki erdogan";
	char set[] = "ogan";
	char *str = ft_strtrim(s1,set);
	printf("%s",str);
}
