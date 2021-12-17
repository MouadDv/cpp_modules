# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: milmi <milmi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/10 00:43:14 by milmi             #+#    #+#              #
#    Updated: 2021/12/17 10:25:00 by milmi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_awesome_phonebook

FLAGS = -Wall -Wextra -Werror

CP = clang++

HEADERS = Contact.hpp Phonebook.hpp

SRC = Contact.cpp Phonebook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "No object files to be cleaned!"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re