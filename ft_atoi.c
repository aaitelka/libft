/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:29:24 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/16 12:51:55 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (result > 922337203685477580
			|| (result == 922337203685477580 && *str - '0' > 7))
			return (-1 * (sign > 0));
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (result * sign);
}
