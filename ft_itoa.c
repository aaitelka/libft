/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:23:05 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/12 14:38:04 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long nb)
{
	size_t	counter;

	counter = 0;
	if (nb < 0 && ++counter)
		nb = nb * (-1);
	if (nb == 0)
		counter = 1;
	else
		while (nb && ++counter)
			nb = nb / 10;
	return (counter);
}

char	*ft_itoa(int n)
{
	size_t	count;
	long	nbr;
	char	*str;
	int		is_minus;

	count = count_digits((long) n);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	nbr = (long) n;
	is_minus = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
		is_minus = 1;
	}
	str[count] = '\0';
	while (count > (size_t) is_minus)
	{
		str[count - 1] = nbr % 10 + '0';
		nbr /= 10;
		count--;
	}
	return (str);
}
