/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 07:20:20 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/17 18:49:31 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	void	ft_mover(char *s, int n)
{
	ft_memmove(s,s+1,n);
}

static	char	*ft_stringer(char const *s, char c, int n)
{
	char	*str;
	int		i;
	
	i = 0;
	str = (char *) malloc ((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memmove(str, s, n+1);
	while (i < n)
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	i = 0;
	
	while (*(str) == '\0')
		str++;
	i = 0;

	while (i < n)
	{
		if (str[i] == '\0' && str[i + 1] == '\0')
			ft_mover(str + i, n);
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**parr;
	char	*str;
	int		size;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	size = ft_strlen(s);
	str = ft_stringer(s, c, size);
	parr = (char **) malloc (size * sizeof(char));
	if (!parr)
		return (NULL);
	parr[j++] = str;
	while (i < size)
	{
		if (str[i] == '\0' && str[i+1] != '\0')
			{
				parr[j] = str + i+1;
				j++;
			}
		i++;
	}
	return (parr);
}
