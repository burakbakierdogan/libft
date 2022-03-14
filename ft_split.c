/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 06:22:51 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/14 06:22:51 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_split(char const *s, char c)
{
	int	a;
	size_t	size;
	char	*cpy_s;

	if (!(cpy_s = (char *) malloc (sizeof (char) * ft_strlen(s))))
		return (NULL);
	a = (int) c;
	cpy_s = ft_memcpy (cpy_s, s, ft_strlen(s)+1);
	cpy_s = ft_strchr (cpy_s, a);
	char	string[ft_strlen(cpy_s) + 1];
	ft_strlcpy (string,cpy_s,ft_strlen(cpy_s) + 1);
	return (string);
}
