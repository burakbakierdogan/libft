#include <libft.h>

int main ()
{
	char *src = "aoa";
	char **str = ft_split(src,'o');
	for (int t = 0; t < 5; t++)
	printf("%s\n", *(str + t));
}
