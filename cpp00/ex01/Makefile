# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno1388 <bruno1388@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/11/25 00:35:23 by bruno1388        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++-12
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror

NAME		=	crappybook

SRCS		=	main.cpp Contact.cpp PhoneBook.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

%.o:%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f *.o

fclean:		clean
			rm $(NAME)

re:			clean all

test:	re

		
.PHONY:		all clean fclean re