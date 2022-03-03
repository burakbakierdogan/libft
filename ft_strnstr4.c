/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:55:48 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/03 08:56:54 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	j;
	int	t;

	i = -1;
	j = 0;
	t = 0;
	if (!needle)
		return ((char *)haystack);
	while (++i < n)
	{
		while (t < ft_strlen(needle))
		{
			if (haystack[j+i] == needle[j])
				j++;
			if (j == ft_strlen(needle))
				return ((char *) &haystack[i]);
			t++;
		}
		j = 0;
		t = 0;
	}
	return (0);
}
