/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:17:54 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/10 08:17:54 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	s1_len;
	size_t	i;

	i = 0;
	s1_len = ft_strlen(s1);
	len = ft_strlen(set);
	str = (char *) malloc (sizeof(char)
		* (ft_strlen(s1) - ft_strlen (set)));
	if (ft_strncmp(s1,set,len) = 0)
		i = len;
	if (ft_strncmp(s1[s1_len - len],set,len) = 0)
		i = (s1_len - len);
}
