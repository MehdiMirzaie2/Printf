# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmirzaie <mmirzaie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 11:44:14 by mmirzaie          #+#    #+#              #
#    Updated: 2023/03/24 12:40:31 by mmirzaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_char.c ft_str.c ft_ptr.c ft_id.c ft_hex.c ft_printf.c ft_putchar_fd.c ft_unsigned.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o:			%.c
				$(CC) $(CFLAGS) -o $@ -c $<

.PHONY:			all clean fclean re