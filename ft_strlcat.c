/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:53:14 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/10 14:03:44 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsize;
	size_t	srclen;
	size_t	dstlen;

	srclen = strlen(src);
	dstlen = strlen(dst);
	dsize = dstlen;
	if (dstsize < dstlen)
		return (dstsize + srclen);
	dst += dstlen;
	while (*src && dstlen < --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (srclen + dstlen);
}
