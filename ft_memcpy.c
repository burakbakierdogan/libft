/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:54:20 by berdogan          #+#    #+#             */
/*   Updated: 2022/02/22 14:00:14 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	int	i;

	i = 0;
	if (dest == src && !n)
		return (dest);
	while (n--)
	{
		*((unsigned char *) dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}
