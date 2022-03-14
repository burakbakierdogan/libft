/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:24:38 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/14 11:17:30 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		x;

	x = 0;
	i = ft_strlen(dest);
	if (n <= i)
		return (ft_strlen(dest) + ft_strlen(src));
	while (src[x] && i + 1 < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
