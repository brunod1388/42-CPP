# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/01 15:41:15 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	HumanA.hpp HumanB.hpp Weapon.hpp

NAME		=	zombie

SRC			=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
SRCS		=	$(addprefix srcs/, $(SRC))

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME) 

all:		$(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -f $(NAME)
			
re:			clean all

test:		re

.PHONY:		all clean fclean re