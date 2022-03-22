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

static	char	*ft_newstring(char const *s1, char c)
{
	char	*str;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	str = (char *) malloc (ft_strlen(s1) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, ft_strlen(s1) + 1);
	while (i < ft_strlen(s1))
	{
		while (s1[i] == c)
			i++;
		while (s1[i] != c && s1[i])
		{
			str[j++] = s1[i++];
			if (s1[i] == c)
			{
				str[j++] = '\0';
				break ;
			}
		}
	}
	return (str);
}

static	size_t	ft_sizer(char const *s)
{
	int	size;

	size = 0;
	while (s[size] != 0 || s[size + 1] != 0)
		size++;
	return (size);
}

static	int	ft_wordcount(char const *s)
{
	int	size;
	int	i;

	i = 0;
	size = 1;
	while (i < ft_sizer(s))
	{
		if (s[i] == 0 && s[i + 1] != 0)
			size++;
		i++;
	}
	return (size + 1);
}

static	int	ft_istring(char const *s, char c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (s[i] == '\0')
		return (0);
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			size--;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	char	**parr;
	char	*cpy;

	i = 0;
	j = 0;
	cpy = ft_newstring(s, c);
	parr = (char **) malloc (ft_wordcount(cpy) * sizeof(char *));
	if (!parr)
		return (NULL);
	parr[j++] = cpy;
	while (i < ft_sizer(cpy) - 1)
	{
		if (cpy[i] == 0 && cpy[i + 1] != 0)
		{
			parr[j++] = cpy + i + 1;
		}
		i++;
	}
	parr[j] = NULL;
	if (ft_istring(s, c) == 0)
		return (parr + j);
	return (parr);
}
