/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:44:12 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/11 18:52:08 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	i;

	i = 0;
	while (n && ++i)
		n /= 10;
	return (i);
}

static void	*allocate(int len)
{
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;
	bool	is_minus;

	nbr = n;
	is_minus = false;
	if (nbr < 0)
	{
		nbr *= -1;
		is_minus = true;
	}
	len = count_digit(nbr) + (1 * (is_minus)) + 1 * (nbr == 0);
	str = allocate(len);
	*str = ('-' * is_minus) + ('0' * (nbr == 0));
	str += len;
	*str = '\0';
	str -= 1 * (nbr == 0);
	while (len-- && nbr)
	{
		*--str = (nbr % 10) + '0';
		nbr /= 10;
	}
	str -= 1 * is_minus;
	return (str);
}
