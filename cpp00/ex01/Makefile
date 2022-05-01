# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/01 02:52:18 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	g++
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	crappybook

SRCS		=	main.cpp Contact.cpp PhoneBook.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f *.o

fclean:		clean
			rm $(NAME)

re:			clean all

test:	re

		
.PHONY:		all clean fclean re