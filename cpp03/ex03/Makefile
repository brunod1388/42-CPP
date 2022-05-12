# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoncalv <bgoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 00:46:25 by bgoncalv          #+#    #+#              #
#    Updated: 2022/05/12 15:39:59 by bgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S		= srcs/
O		= objs/
I		= incs/

NAME	= trap

SRCS	= main.cpp ClapTrap.cpp FragTrap.cpp

CC		= clang++

CFLAGS	+= -Wall -Wextra -Werror -std=c++98

CFLAGS	+= -I$I
SRCS	:= $(foreach file,$(SRCS),$S$(file))
OBJS	= $(SRCS:$S%=$O%.o)
DEPS	= $(SRCS:$S%=$D%.d)
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
