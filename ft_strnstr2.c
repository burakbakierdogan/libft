#include "libft.h"

/*
** ft_strnstr - locate a substring in a string
*/

char	*ft_strnstr(const char *big, const char *little, size_t blen)
{
	size_t	llen;

	if (*little == '\0')
		return ((char *)big);
	llen = ft_strlen(little);
	while (*big && blen-- >= llen)
	{
		if (*big == *little && ft_strncmp(big, little, llen) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
