/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 06:22:51 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/21 16:11:31 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
	if (k == 1)
		return (NULL);
	str = ft_calloc (ft_sizer(s, c), sizeof(char));
	while (s[i] && s[i] != c)
			str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

static	int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	if (!s[i])
		return (0);
	while (i < ft_strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
			{
				j++;
				i += ft_sizer(s + i + 1, c);
			}
		else
			i++;
	}
	return (j + 1);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**parr;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	parr = ft_calloc(ft_wordcount(s, c), sizeof(char *));
	int u = ft_wordcount(s,c);
	printf ("%d\n",u);
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			parr[j++] = ft_new(s + i, c);
			i += ft_sizer(s+ i, c);
		}
	}
	parr[j] = NULL;
	return (parr);
}
