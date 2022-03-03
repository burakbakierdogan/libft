#include <libft.h>

int	main(void)
{
	char haystack[] = "burak baki erdogan";
	char needle[] = "baki";
	char *sonuc = ft_strnstr(haystack,needle,11);
	printf("%s",sonuc);
}
