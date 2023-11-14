/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:18:35 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/14 12:52:11 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, int c)
{
	int	is_c;
	int	counter;

	is_c = 1;
	counter = 0;
	while (*s)
	{
		if (*s == c)
			is_c = 1;
		else if (is_c && ++counter)
			is_c = 0;
		s++;
	}
	return (counter);
}

static void	*free_me(char **str_arr, int i)
{
	while (i--)
		free(str_arr[i]);
	free(str_arr);
	return (NULL);
}

static char	**split(char **str_arr, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			str_arr[i] = ft_substr(s, 0, len);
			if (!str_arr[i])
				return (free_me(str_arr, i));
			s += len;
			i++;
		}
	}
	str_arr[i] = NULL;
	return (str_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	return (split(strs, s, c));
}
