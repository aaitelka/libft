/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:50:42 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/07 15:50:42 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
