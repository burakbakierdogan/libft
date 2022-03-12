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
	size = ft_strlen(str);
	char *buffer;
	buffer = (char *) malloc (size+1);
	size -=1;
	while (size >= 0)
	{
		*(buffer + index) = *(str + size);
		index++;
		size--;
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
	str = ft_reverse(str);
	return (str);
}
