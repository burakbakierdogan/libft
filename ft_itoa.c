/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:09:40 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/10 14:09:40 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_sizer(int n)
{
	int	size;

	if (n < 0)
		n *=-1;
	while ((n / 10) > 0)
	{
		n /= n;
		size++;
	}
	return (size);
}
char	*ft_reverse(char *str)
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
	n = number < 0 ? number *= -1: n;
	while (number > 0)
	{
		str[i++] = (number%10) + 48;
		number /= 10;
	}
	n = n < 0 ? str[i++] = '-' : n;
	str[i] = '\0';
	str = ft_reverse (str);
	return (str);
}
