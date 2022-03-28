#include <libft.h>

char ft_print(unsigned int i, char c)
{
	i = i;
	return (c - c + 48 + i);
}
int main ()
{
	char *arr = "burak";
	char *str;
	str = ft_strmapi(arr, ft_print);
	printf("%s\n", str);
}
