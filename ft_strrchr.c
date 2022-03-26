/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:25:14 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/26 15:01:21 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	int				size;
	char			*ptr;

	size = ft_strlen(s);
	ptr = (char *) s;
	s = s + size;
	a = (unsigned char) c;
	while (*s != *ptr && *s != a)
		s--;
	if (*s == a)
		return ((char *) s);
	return (NULL);
}
