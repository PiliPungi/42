# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/12 08:16:38 by pcachin      #+#   ##    ##    #+#        #
#    Updated: 2019/10/17 19:21:20 by pcachin     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strcmp.c \
		  srcs/ft_strlen.c \
		  srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

NAME 	= libft.a

AR		= ar rcs

CC		= gcc

RM		= rm -f

CFLAG	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:	${NAME}

clean: 
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
