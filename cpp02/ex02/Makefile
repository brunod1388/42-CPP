# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/04 22:00:08 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

INCLUDES	=	Fixed.hpp

NAME		=	fix

SRCS		=	main.cpp Fixed.cpp

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
			./$(NAME)

.PHONY:		all clean fclean re