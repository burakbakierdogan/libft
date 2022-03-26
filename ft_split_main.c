#include <libft.h>

int main ()
{
	char **str = ft_split("aaoaaooaoo",'o');
	for (int t = 0; t < 5; t++)
	printf("%s\n", *(str + t));
}
