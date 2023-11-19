/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:04:27 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/18 16:41:36 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	if (dst == src)
		return (dst);
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*cdst++ = *csrc++;
	return (dst);
}
