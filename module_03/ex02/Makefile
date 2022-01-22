# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 00:43:14 by milmi             #+#    #+#              #
#    Updated: 2021/12/23 18:12:41 by milmi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

CP = clang++

SRC = FragTrap.cpp ScavTrap.cpp ClapTrap.cpp main.cpp

HEADER = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "No object files to be cleaned!"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
