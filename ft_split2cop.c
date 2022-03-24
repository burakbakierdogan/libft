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
	if (size != 0)
		return (size + 1);
	return (size);

}

/*int main (void)
{
	char const *str = "khkk";
	char c = 'k';
	size_t total = ft_newsize(str,c);
	printf("%d", total);
}
*/

static	size_t	ft_endR(char const *s, char c)
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
static	size_t	ft_startR(char const *s, char c)
{
	size_t	start;

	start = 0;
	while (s[start] == c)
		start++;
	return (start);
}

static	char	*ft_malloc(char *str, char const *s, char c)
{
	str = (char *) malloc (ft_newsize(s, c) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, ft_newsize(s, c) + 1);
	return (str);
}

static	char	*ft_newstring(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	end;
	size_t	j;

	j = 0;
	i = ft_startR(s, c);
	end = ft_endR(s,c);
	str = ft_malloc(str, s, c);
	while (i + end < ft_strlen(s))
	{
		if (s[i] != c)
			{
				*(str + j) = s[i];
				j++;
				i++;
			}
		if (s[i] == c && ft_isrepeat(s + i, c) == 0)
		{
			str[j] = '\0';
			j++;
			i++;
		}
		else if (s[i] == c)
		{
			str[j++] = '\0';
			i += ft_isrepeat(s + i, c) + 1;
		}
	}
	return (str);
}
/*int main (void)
{
	char *ptr = "bonjour je m'appel Arthur";
	char *str = ft_newstring(ptr, 'o');
	int i = ft_newsize(ptr,'k');
	printf("%d\n",i);
	for (int t = 0; t < i+2; t++)
		printf ("%d - %d\n",t,str[t]);


}
*/
static	size_t	ft_isnull(char *str, char const *s, char c)
{
	size_t	total;
	size_t	i;
	size_t	j;

	total = 0;
	j = ft_newsize(s,c) - 1;
	i = 0;
	while (i < j)
	{
		if (str[i] == '\0')
			total++;
		i++;
	}
	if (total != 0)
		return (total + 1);
	return (total);

}
char	**ft_split(char const *s, char c)
{
	char	**parr;
	char	*str;
	size_t	isnull;
	int i;
	int j;

	i = 0;
	j = 0;
	str = ft_newstring(s, c);
	isnull = ft_isnull(str,s,c);
	parr = (char **) malloc (isnull + 1 * sizeof(char *));
	if (!parr)
		return (NULL);
	parr[j++] = str;
	while (isnull > 1)
	{
		if (str[i] == '\0')
		{
			parr[j++] = (str + 1+ i);
			isnull--;
		}
		i++;
	}
	parr[j] = NULL;
	return (parr);
}

