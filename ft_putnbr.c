/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:00:53 by berdogan          #+#    #+#             */
/*   Updated: 2022/03/11 11:00:53 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *) s + i) = (unsigned char) c;
		i++;
	}
	return (s);
}
char	*ft_putnbr(char *str, int n, int index)
{
	if (n < 10)
	{
		ft_memset((str + index), 48 + n,1);
		index++;
		return (0);
	}
	ft_putnbr((str + index),n/10,index++);
	ft_putnbr((str + index),n%10,index++);
	str[index] = '\0';
	return (str);
}
int main ()
{
	char *str;
	str = ft_putnbr(str,12,0);
	printf("%s",str);

}
