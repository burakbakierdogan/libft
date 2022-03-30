#include "libft.h"
int main()
{
	char *c = "aaaaaaaaaaa";
	char **str = ft_split(c, 'a');
	printf("%s\n", *(str));
}
