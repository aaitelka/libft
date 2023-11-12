/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:18:35 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/12 14:20:24 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(const char *s, char c)
{
	static int count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char **ft_split(const char *s, char c)
{
	char **splited;
	char *trimmed;
	char **str_arr;
	int arr_size;

	if (!s)
		return (NULL);
	trimmed = ft_strtrim(s, &c); /**TODO fix this line*/
	if (!trimmed)
		return (NULL);
	arr_size = count_words(trimmed, c);
	splited = ft_calloc(sizeof(char *), (arr_size + 1));
	if (!splited)
		return (NULL);
	str_arr = splited;
	while (arr_size--)
	{
		*splited = trimmed;
		while (*trimmed && *trimmed != c)
			trimmed++;
		while (*trimmed && *trimmed == c)
		{
			*trimmed = '\0';	
			trimmed++;
		}
		splited++;
	}
	splited = NULL;
	return (str_arr);
}
