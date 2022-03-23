#include <libft.h>

int main ()
{
	char **ptr;
	char *str = "bonjour je m'appel Arthur";
	ptr = ft_split(str,'o');
	for (int t = 0; t < 8; t++)
	printf("%s\n", *(ptr + t));
}
