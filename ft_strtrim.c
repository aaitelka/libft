/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:58:40 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/14 10:04:58 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set, s1[start]))
		start++;
	if (start <= len)
		while (ft_strchr(set, s1[len]))
			len--;
	str = ft_substr(s1, start, len - start + 1);
	return (str);
}
