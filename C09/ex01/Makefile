# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 15:45:59 by orfreoua          #+#    #+#              #
#    Updated: 2020/02/27 16:26:30 by orfreoua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS		= -Wall -Werror -Wextra

SRCS		= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS		= ${SRCS:.c=.o}

HEADERS		= ./includes/

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I${HEADERS}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
