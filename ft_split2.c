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
	char const *str = "khkk";
	char c = 'k';
	size_t total = ft_newsize(str,c);
	printf("%d", total);
}
*/

static	size_t	ft_endrepeat(char const *s, char c)
{
	size_t	i;
	size_t	total;

	total = 0;
	i = ft_strlen(s) - 1;
	while (s[i] == c)
	{
		i--;
		total++;
	}
	return (total);
}

static	char	*ft_newstring(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	end;

	i = 0;
	j = 0;
	str = (char *) malloc (ft_newsize(s, c) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, ft_newsize(s, c) + 1);
	while (s[i] == c)
		i++;
	end = ft_endrepeat(s, c);
	while (i + end < ft_strlen(s))
	{
		if (str[i] != c)
		{
			str[j] = s[i];
			i++;
			j++;
		}
		while (str[i] == c )
		{
			if (ft_isrepeat(s + i, c) == 0)
				{
					str[j++] = '\0';
				i++;
				}
			else
			str[j++] = '\0';
			i += ft_isrepeat(s + i, c) + 1;
		}
	}
	return (str);
}
int main (void)
{
	char *ptr = "kkkkkk";
	char *str = ft_newstring(ptr, 'k');
	int k = ft_newsize(ptr, 'a');
	for (int t = 0; t < k+2; t++)
		printf("%d\n",*(str + t));
}
/*
char	**ft_split(char const *s, char c)
{

}
*/
