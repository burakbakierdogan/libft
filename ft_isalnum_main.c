#include <libft.h>

int	main(void)
{
	char a = 'a';
	char b = ' ';
	char c = '3';
	
	int x = ft_isalnum(a);
	int y = ft_isalnum(b);
	int z = ft_isalnum(c);

	printf("%d %d %d \n",x, y, z);
}
