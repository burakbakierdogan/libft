/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:57:44 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/14 14:10:52 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <libft.h>

static	int	ft_sizer(int n)
{
	int	size;

	if (n < 0)
		n *= -1;
	while ((n / 10) > 0)
	{
		n /= n;
		size++;
	}
	return (size);
}
static	char	*ft_reverse(char *str)
{
	int	size;
	int	index;

	index = 0;
	size = ft_strlen (str);
	char *buffer;
	buffer = (char *) malloc (size + 1);
	size -= 1;
	while (size >= 0)
	{
		*(buffer + index++) = *(str + size--);
	}
	*(buffer + index) = '\0';
	buffer = ft_reverse(buffer);
	return (buffer);
}

static	char	*ft_putnumber(char *s, int n)
{
	int		number;
	size_t	index;
	char	*buffer;
	
	index = 0;
	buffer = (char *) malloc ( sizeof(char) * ft_sizer(n) + 1);
	if (!buffer)
		return (NULL);
	buffer = ft_memmove (buffer, s, ft_sizer(n)+ 1);
	number = n;
	if (number < 0)
		n *= -1;
	while (number > 0)
	{
		*((char *) buffer + index++) = (number % 10) + 48;
		number /= 10;
	}
	if (n < 0)
		*((char *) buffer + index++) = '-';
	*((char *) buffer + index) = '\0'; 
	return (buffer);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int number;

	i = 0;
	number = n;
	if (!(str = (char *) malloc
		(ft_sizer(n) +1 * sizeof(char))))
			return (NULL);
	if (n == 0)
	{
		str[i] = 48;
		str[i+1] = '\0';
		return (str);
	}
	str = ft_putnumber (str, n);
	ft_reverse(str);
	return (str);
}
