#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
unsigned	char	*str;
	size_t	i;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
