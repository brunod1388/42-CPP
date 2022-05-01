# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 15:25:39 by gdufresn          #+#    #+#              #
#    Updated: 2022/03/16 00:31:20 by bgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.c=.o)

CC			=	gpp
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):
			g++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean:		clean

re:			clean all

test:	re
		./megaphone "shhhhh... I think the students are asleep..."
		./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
		./megaphone
		
.PHONY:		all clean fclean re

