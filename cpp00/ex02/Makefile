# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/04/28 20:24:03 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	Account.hpp

NAME		=	account

SRCS		=	tests.cpp Account.cpp

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