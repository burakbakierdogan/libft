#include <libft.h>

int	main(void)
{
	char haystack[] = "";
	char needle[] = "akiawdawdawawdasdwa";
	char *sonuc = ft_strnstr(haystack,needle,0);
	printf("%s",sonuc);
}
