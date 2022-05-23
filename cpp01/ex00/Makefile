# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/18 19:56:51 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	g++-11
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

INCLUDES	=	Zombie.hpp

NAME		=	zombie

SRCS		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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