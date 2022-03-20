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

static	char	*ft_newstring(char const *s1, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *) malloc (ft_strlen(s1) + 2 * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, ft_strlen(s1) + 2 );
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
				break;
			}
		}
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**parr;
	char	*cpy;

	i = 0;
	j = 0;
	cpy = ft_newstring(s, c);
	parr = (char **) malloc (1 * sizeof(char **));
	if (!parr)
		return (NULL);
	for (int t = 0; t < 10; t++)
		printf("%d\n", cpy[t]);


	parr[j] = NULL;
	return (parr);
}
