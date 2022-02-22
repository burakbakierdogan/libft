#include <libft.h>
int	main(void)
{
	char  *p;
	char a[] = "burak";
	p = a;

	ft_memset(p, 'a', 8*sizeof(char));
	printf("%s\n", p);
}
