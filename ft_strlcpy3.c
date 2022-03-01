#include "libft.h"

size_t	ft_strlcpy(char *dest,const char *src, size_t k)
{
	size_t	index;

	index = 0;
	if (k > 0)
	{
		while (index < (k - 1) && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index])
		index++;
	return (index);
}
