# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milmi <milmi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 00:43:14 by milmi             #+#    #+#              #
#    Updated: 2022/02/10 13:28:50 by milmi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

CP = clang++

SRC = ClapTrap.cpp main.cpp

HEADER = ClapTrap.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "No object files to be cleaned!"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
