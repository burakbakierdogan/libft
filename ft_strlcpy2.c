#include <libft.h>

size_t		ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t		idx;
	size_t		count;

	idx = 0;
	count = 0;
	return (count);
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[idx] && idx + 1 < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (n)
		dest[idx] = '\0';

}
