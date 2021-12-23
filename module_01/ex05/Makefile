# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milmi <milmi@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 00:43:14 by milmi             #+#    #+#              #
#    Updated: 2021/12/23 06:28:07 by milmi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen

FLAGS = -Wall -Wextra -Werror -std=c++98

CP = clang++

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "No object files to be cleaned!"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re