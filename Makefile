# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 23:45:40 by aaitelka          #+#    #+#              #
#    Updated: 2023/11/12 18:42:38 by aaitelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror
AR		:= ar rcs
RM		:= rm -f
SRCS	:=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c\
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c 
BONUS	:=	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			#ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			#ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

B_OBJS	=	$(BONUS:.c=.o)

OBJS	:=	$(SRCS:.c=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS) #$(B_OBJS)
	$(AR) $(NAME) $(OBJS) #$(B_OBJS)

bonus	: $(B_OBJS)
	$(AR) $(NAME) $(B_OBJS)

#$(B_OBJS)		: $(BONUS)
#	$(CC) $(CFLAGS) -c $(BONUS)
clean		:
	$(RM) $(OBJS) $(B_OBJS)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean $(NAME)
