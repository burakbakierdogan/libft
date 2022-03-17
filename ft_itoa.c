/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:09:40 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/14 14:19:33 by berdogan         ###   ########.fr       */
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
	buffer = (char *) malloc (sizeof(char) * size + 1);
	if (!buffer)
		return (NULL);
	size -= 1;
	while (size >= 0)
		*(buffer + index++) = *(str + size--);
	*(buffer + index) = '\0';
	return (buffer);
}
char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		number;

	i = 0;
	number = n;
	str = (char *) malloc (ft_sizer(n) + 1 * sizeof (char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str = "0";
		return (str);
	}
	if (number < 0)
		number *= -1;
	while (number > 0)
	{
		str[i++] = (number%10) + 48;
		number /= 10;
	}
	if ( n < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_reverse (str));
}
