/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:06:31 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/10 20:52:24 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if ((!haystack || !needle) && !len)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (haystack + needle_len <= haystack + len)
			if (ft_strncmp(haystack, needle, needle_len) == 0)
				return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
