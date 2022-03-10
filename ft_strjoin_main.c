#include <libft.h>

int main (void)
{
	char a[] = "burak";
	char b[] = "bakierdogan";
	char *str = ft_strjoin(a,b);
	printf("%s",str);
	free(str);
}
