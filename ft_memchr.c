/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 07:48:51 by berdogan          #+#    #+#             */
/*   Updated: 2022/02/26 07:48:51 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	a;

	a = (unsigned char) c;
	while (n--)
	{
		if (*(unsigned char *)s == a)
		{
			return ((void *) s);
		}
		s++;
	}
	return (NULL);
}
