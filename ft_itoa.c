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
char	ft_reverse(char *str)
{
	int	i;
	int	len;
	char	temp[ft_strlen(str)];

	i = 0;
	len = ft_strlen(str);
	while (len--)
		temp[i++] = str[i++];
	len = ft_strlen(str);
	i = 0;
	while (len > 0)
		str[i++] = temp[len--];
}
char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int number;

	i = 0;
	number = n;
	if (!(str = (char *) malloc (ft_sizer(n) * sizeof(char))))
		return (NULL);
	number = n;
	if (number < 0)
		number *= -1;
	while (number > 0)
	{
		str[i++] = (number%10) + 48;
		number /= 10;
	}
	if (n < 0)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	ft_reverse(str);
	return (str);
}
