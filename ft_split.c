/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 06:22:51 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/26 14:59:50 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_sizer(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i + 1);
}

static	char	*ft_new(char const *s, char c)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = ft_sizer(s, c);
	str = (char *) ft_calloc (k, sizeof(char));
	while (s[i] && s[i] != c)
			str[j++] = s[i++];
	return (str);
}

static	int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c && s[i])
			i++;
		j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**parr;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	parr = (char **) ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		while (s[i] != c && i < ft_strlen(s))
		{
			parr[j++] = ft_new(s + i, c);
			i += ft_sizer(s + i, c);
		}
	}
	parr[j] = NULL;
	return (parr);
}
