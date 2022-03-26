#include <libft.h>

int	main(void)
{
	char haystack[] = "burak baki erdogan";
	char needle[] = "er";
	char *sonuc = ft_strnstr(haystack,needle,20);
	printf("%s",sonuc);
}
