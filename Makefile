# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 18:33:43 by yuboktae          #+#    #+#              #
#    Updated: 2023/02/22 16:36:10 by yuboktae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	= 	main.c \
			utils.c \
			parsing.c \
			correct_input.c \
			init_a.c \
			free_stacks.c \
			move_swap.c \
			move_push.c \
			move_rotate.c \
			move_rev.c \
			sort_utils.c \
			sorting.c \
			big_sort.c \

OBJS	=	${SRCS:.c=.o}

CC	=	cc

CFLAGS	= -Wall -Wextra -Werror -g3

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -o $@ -c $<


all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}
	rm -f *.a

re:	fclean all

.PHONY:	all clean fclean re
