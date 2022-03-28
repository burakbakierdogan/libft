/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 05:10:18 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/26 15:01:15 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(const char *a, const char *b, size_t c)
{
	size_t	i;
	int		j;

	i = 0;
	j = c;
	while (i < c && a[i])
	{
		if (a[i] == b[i])
			j--;
		i++;
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	k;
	size_t	i;

	k = ft_strlen(needle);
	if (k == 0)
		return (NULL);
	if (n == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && n--)
	{
		if (!ft_check(haystack + i, needle, k))
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
