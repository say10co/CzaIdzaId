# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adriouic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 12:42:22 by adriouic          #+#    #+#              #
#    Updated: 2022/06/09 12:42:25 by adriouic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRC =  src/Claptrap.cpp src/main.cpp

FLAGS = -Wall -Werror -Wextra

COMPILER = c++

STANDARD = -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(COMPILER) $(FLAGS) $(STANDARD) $(SRC) -o $@

clean:
	rm -rf $(NAME)
fclean: clean
	rm -rf $(NAME)
re: fclean all

