/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:52:06 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/22 20:52:06 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	size_t	ft_isrepeat(char const *s, char c)
{
	size_t	total;
	size_t	index;

	total = 0;
	index = 0;
	while (s[index] == c)
	{
		if (s[index] == c)
			total++;
		index++;
	}
	if (total != 0)
		return (total - 1);
	return (total);
}

static	size_t	ft_sizer(char const *s, char c)
{
	size_t	size;
	size_t	index;

	size = ft_strlen(s);
	index = 0;
	while (s[index])
	{
		if (ft_isrepeat(s + index, c) != 0)
		{
			size -= ft_isrepeat(s + index,c);
			index += ft_isrepeat(s + index,c);
		}
		else
		index++;
	}
	return (size);
}

static	size_t	ft_newsize(char const *s, char c)
{
	size_t	start;
	size_t	end;
	char	*temp;
	size_t	size;

	start = 0;
	while (s[start] == c)
		s + start++;
	end = ft_strlen(s + start);
	temp = (char *) malloc (end + 1 * sizeof(char));
	ft_memmove(temp, s + start, end + 1);
	end = end - 1;
	while (temp[end] == c)
		temp[end--] = '\0';
	size = ft_sizer(temp, c);
	free (temp);
	return (size + 1);
}

/*int main (void)
{
	char const *str = "khhkkhkk";
	char c = 'k';
	size_t total = ft_newsize(str,c);
	printf("%d", total);
}
*/

static	char	*ft_newstring(char const *s, char c)
{
	char	*str;
	int		index;


	str = (char *) malloc (ft_newsize(s, c) * sizeof(char));
	ft_memset(str, '\0', ft_newsize(s, c));

}

/*
char	**ft_split(char const *s, char c)
{

}
*/
