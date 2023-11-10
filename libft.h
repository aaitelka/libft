/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:18:09 by aaitelka          #+#    #+#             */
/*   Updated: 2023/11/10 15:59:40 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <string.h>

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

char
*ft_strrchr(const char *s, int c);

int
ft_strncmp(const char *s1, const char *s2, size_t n);

size_t
ft_strlcpy(char *dst, const char *src, size_t dstsize);

void
*ft_memset(void *b, int c, size_t len);

void
ft_bzero(void *s, size_t n);

void
*ft_memcpy(void *dst, const void *src, size_t n);

void
*ft_memchr(const void *s, int c, size_t n);

int
ft_memcmp(const void *s1, const void *s2, size_t n);

void
*ft_memmove(void *dst, const void *src, size_t len);

size_t
ft_strlcat(char *dst, const char *src, size_t dstsize);

char
*ft_strnstr(const char *haystack, const char *needle, size_t len);

int
ft_atoi(const char *str);

void
*ft_calloc(size_t count, size_t size);
#endif
