/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 05:10:18 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/14 11:34:50 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	j;
	int	k;
	int	t;

	i = 0;
	j = 0;
	k = 0;
	t = 0;
	if (!needle)
		return ((char *)haystack);
	while (i < n)
	{
		while (t < ft_strlen(needle))
		{
			if (haystack[k + i] == needle[j])
			{
				k++;
				j++;
			}
			if (j == ft_strlen(needle))
				return ((char *) &haystack[i]);
			t++;
		}
		k = 0;
		j = 0;
		t = 0;
		i++;
	}
	return (0);
}
