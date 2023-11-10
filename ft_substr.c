/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:43:20 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/10 18:24:29 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return ((char *)s);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, ++len);
	return (str);
}
