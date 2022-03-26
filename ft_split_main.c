#include <libft.h>

int main ()
{
	char *src = "aaakaaakkakaakkakaak";
	char **str = ft_split(src,'a');
	for (int t = 0; t < 5; t++)
	printf("%s\n", *(str + t));
}
