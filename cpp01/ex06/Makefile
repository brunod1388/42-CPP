# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/02 14:02:37 by brunodeoliv      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S		= srcs/
O		= objs/
I		= incs/

NAME	= harlFilter

SRCS	= main.cpp Harl.cpp

CC		= clang++

CFLAGS	+= -Wall -Wextra -Werror -std=c++98

CFLAGS	+= -I$I
SRCS	:= $(foreach file,$(SRCS),$S$(file))
OBJS	= $(SRCS:$S%=$O%.o)
RM		= /bin/rm -rf

.PHONY: all clean fclean re test

all: $(NAME)
$O:
		@mkdir $@

$(OBJS): | $O

$(OBJS): $O%.o: $S%
		@echo "Compiling $^: "
		@$(CC) $(CFLAGS) -c $< -o $@
		@echo "✓"

$D:
		@mkdir $@

$(NAME): $(OBJS)
		@echo "Assembling $(NAME)"
		@$(CC) $(LDFLAGS) $^ -o $@

clean:
		@echo "Cleaning up..."
		@$(RM) $D $O

fclean: clean
		@echo "Everything!"
		@$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)
