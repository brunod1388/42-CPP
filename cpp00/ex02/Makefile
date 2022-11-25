# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno1388 <bruno1388@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/11/25 02:00:45 by bruno1388        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++-12
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror

INCLUDES	=	Account.hpp

NAME		=	account

SRCS		=	tests.cpp Account.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

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