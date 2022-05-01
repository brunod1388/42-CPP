# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/02 00:37:13 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= loser_sed

SRCS	= main.cpp

CC		= clang++

CFLAGS	+= -Wall -Wextra -Werror -std=c++98

OBJS	= $(SRCS:.cpp=.o)
RM		= /bin/rm -rf

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
		@echo "Assembling $(NAME)"
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
		@echo "Cleaning up..."
		@$(RM)

fclean: clean
		@echo "Everything!"
		@$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME) lorem ipsum KIKOUUUUUU
