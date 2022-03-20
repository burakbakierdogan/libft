#include <libft.h>
#include <string.h>

int	main(void)
{
	char **s;
	char  *k;
	k  = "aaabaaababbaabbbababa";
	s = &k;
	char a = 'a';
	s = ft_split(k,a);
	printf("%s", *(s+6));
}
