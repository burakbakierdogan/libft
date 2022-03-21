#include <libft.h>
#include <string.h>

int	main(void)
{
	char **s;
	char  *k;
	k = "UN_DEUX_TROIS";
	s = &k;
	char a = '_';
	s = ft_split(k,a);
	for (int t = 0; t < 12; t++)
	printf("%d : '%s'\n",t, *(s+ t));
}
