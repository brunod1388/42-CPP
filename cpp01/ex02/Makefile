# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/01 15:24:38 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	Zombie.hpp

NAME		=	string

SRCS		=	main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

all:		$(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -f $(NAME)
			
re:			clean all

test:		re

.PHONY:		all clean fclean re