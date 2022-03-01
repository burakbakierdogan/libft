#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ret;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	ret = dest;
	while (n--)
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	return (ret);
}
