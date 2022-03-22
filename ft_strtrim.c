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
	size_t	index;
	size_t	size;
	size_t	ssize;
	char *temp;

	index = 0;
	size = ft_strlen (s1);
	ssize	= ft_strlen (set);
	if (!(temp = (char *) malloc (sizeof(char) * size)))
		return (NULL);
	ft_memcpy(temp,s1,size+1);
	if (ft_strncmp (temp, set, ssize) == 0)
		temp = temp + ssize;
	size = ft_strlen(temp);
	if (ft_strncmp ((temp + size - ssize),set, ssize) == 0)
	{
		temp[size - ssize] = '\0';
	}
	return (temp);
}
