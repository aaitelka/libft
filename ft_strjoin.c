/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:25:46 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/10 19:48:21 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	dstlen;

	if (!s1 || !s2)
		return (NULL);
	dstlen = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(dstlen + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, dstlen);
	ft_strlcat(str + 1, s2, dstlen);
	return (str);
}
