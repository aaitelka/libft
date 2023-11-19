/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:08:01 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/18 22:17:35 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;

	if (dst == src)
		return (dst);
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (source < destination)
		while (len--)
			destination[len] = source[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
