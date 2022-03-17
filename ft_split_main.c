#include <libft.h>

int	main(void)
{
	char **s;
	char *k;
	k = "aaaburakbakierdoganaaan";
	s = &k;
	char a = 'a';
	s = ft_split(k,a);
	printf("%s", *(s+5));
}
