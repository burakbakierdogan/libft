/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:24:38 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/01 13:20:41 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	if (!dest || !src)
		return (0);
	size_t	i;
	int	x;
	
	x = -1;
	i = ft_strlen(dest);
	if (n)
	{
		while (src[x] && --n)
		{
			i++;
			x++;
			dest[i] = src[x];
		}
		dest[i] = '\0';
	}
	return (ft_strlen(dest) + ft_strlen(src));
}
