/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:18:09 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/08 11:54:48 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
/**
 *	Part 0ne.
 * */

int
ft_isalpha(int c);

int
ft_isdigit(int c);

int
ft_isalnum(int c);

int
ft_isascii(int c);

int
ft_isprint(int c);

int
ft_toupper(int c);

int
ft_tolower(int c);

size_t
ft_strlen(const char *s);

char
*ft_strchr(const char *s, int c);

#endif
