/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:40:25 by berdogan          #+#    #+#             */
/*   Updated: 2022/02/27 22:40:25 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char temp[ft_strlen(src)];
	int i;

	i = 0;
	while (i < n)
	{
		temp[i] = *((const unsigned char*)src + i);
		i++;
	}
	i = 0;
	while (n--)
	{
		*((unsigned char *)dest +i) = temp[i];
	}
	return (dest);
}
