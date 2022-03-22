#include <libft.h>

int	main(void)
{
	char **s;
	char  *k;
	k = "bonjour je m'appel ArthurS";

	char a = 'o';
	s = ft_split(k,a);
	for (int t = 0; t < 16; t++)
	printf("%d : '%s'\n",t, *(s+ t));
}
