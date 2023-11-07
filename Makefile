# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 23:45:40 by aaitelka          #+#    #+#              #
#    Updated: 2023/11/07 23:54:02 by aaitelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 18:24:09 by daelee            #+#    #+#              #
#    Updated: 2021/01/03 12:23:27 by daelee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
AR		:= ar rcs
RM		:= rm -f

SOURCES	:=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \

OBJECTS	:= $(SOURCES:.c=.o)

.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
