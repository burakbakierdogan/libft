/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:17:54 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/10 08:17:54 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	int	ft_backset(char const *str, char const *set)
{
	size_t	i;
	size_t	ssize;
	size_t	size;
	size_t	j;

	j = 0;
	i = 0;
	ssize = ft_strlen(set);
	size = ft_strlen(str) - ssize;
	while (ssize > 0)
	{
		if (str[size++] == set[i++])
			j++;
		ssize--;
	}
	if (j == ft_strlen(set))
		return (10);
	return (0);
}

static	int	ft_frontset(char const *str, char const *set)
{
	size_t	ssize;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ssize = ft_strlen(set);
	while (i < ssize)
	{
		if (str[i] == set[i])
			j++;
		i++;
	}
	if (j == ssize)
		return (5);
	return (0);
}

static	char	*ft_trim_fnb(char const *s1, char const *set)
{
	char	*str;
	size_t	size;
	size_t	ssize;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1);
	ssize = ft_strlen(set);
	i = 0;
	j = 0;
	str = (char *) malloc ((size - (2 * ssize) + 1)
			* sizeof (char));
	if (!str)
		return (NULL);
	while (i < size - (2 * ssize))
	{
		str[j] = s1[j + ssize];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

static	char	*ft_trimmer(char const *s1, char const *set, size_t size)
{
	char	*str;
	size_t	ssize;
	size_t	i;

	ssize = ft_strlen(set);
	i = 0;
	str = (char *) malloc ((size - ssize) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (i < size - ssize)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		sum;
	char	*str;
	size_t	size;
	size_t	ssize;

	size = ft_strlen(s1);
	ssize = ft_strlen (set);
	sum = ft_backset(s1, set) + ft_frontset(s1, set);
	if (size <= ssize)
		return (0);
	if (sum == 0)
	{
		str = (char *) malloc ((size + 1) * sizeof(char));
		if (!str)
			return (NULL);
		ft_memcpy(str, s1, size);
	}
	if (sum == 5)
		str = ft_trimmer(s1 + ssize, set, size);
	if (sum == 10)
		str = ft_trimmer(s1, set, size);
	if (sum == 15)
		str = ft_trim_fnb(s1, set);
	return (str);
}
