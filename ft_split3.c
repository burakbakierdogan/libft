/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 07:20:20 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/17 07:20:20 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	char	*ft_stringer(char const *s, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *) malloc (ft_strlen(s) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, ft_strlen(s) + 1);
	
}

char	**ft_split(char const *s, char c);
{

}
