#include "libft.h"

void ft_function(unsigned int a, char *c)
{
	a = a;
	write(1, c, 1);
}

int main(void)
{
	char *str = "burak";
	ft_striteri(str, ft_function);
}
