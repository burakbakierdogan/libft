/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 06:22:51 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/17 12:24:02 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	char	*ft_newstrings(char const *str, char c, int n)
{
	char	*nstr;
	int		i;
	int		size;

	size = ft_strlen(str);
	i = 0;
	nstr = (char *) malloc (n * sizeof(char));
	if (!nstr)
		return (NULL);
	ft_memmove(nstr, str, n);
	while (i <= size)
	{
		if (nstr[i] == c)
			nstr[i] = '\0';
		i++;
	}
	i = 0;
	while (nstr[i] == '\0')
		nstr++;
	return (nstr);
}

static	int	ft_counter(char const *s, char const *s2)
{
	int	i;
	int	n;

	n = ft_strlen(s2);
	i = 0;
	while (n--)
	{
		if (*s == '\0' && *(s + 1) != '\0')
		{
			i++;
		}
		s++;
	}
	return (i);
}

static	int	ft_sizer(char const *str, char const *str2, int c)
{
	int i = 0;
	return	i;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*cpy;
	int		i;
	int		lmt;
	int		p;

	i = 0;
	p = 0;
	str = (char **) malloc ((lmt + 1) * sizeof(void **));
	if (!str)
		return (NULL);
	cpy = ft_newstrings(s, c, (ft_strlen(s)+1));
	str[p++] = cpy;
	lmt = ft_counter(cpy, s);
	while (i < ft_strlen(s) && lmt > 0)
	{
		if (cpy[i] == '\0' && cpy[i + 1] != '\0')
		{
			*(str + p++) = (cpy + (i + 1));
			lmt--;
		}
		i++;
	}
	str[p] = NULL;
	return (str);
}
