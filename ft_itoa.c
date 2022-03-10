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

char	*ft_itoa(int n)
{
	char	*str;
	int	i;

	i = 0;
	if (!(char str = (char *) malloc (sizeof(char) * 3)))
		return (NULL);
	if (n == 2147483647)
	{
		str = "2147483647";
		return (str);
	}
	if (n < 0)
	{
		n = (n * -1);
		str[i] = '-';
		i++;
	}
	if (n < 10)
	{
		str[i] = (48 + n);
		i++;
		return (str);
	}
	if (n > 10)
	{
		n = 
	}
}
