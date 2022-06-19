# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adriouic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 21:06:42 by adriouic          #+#    #+#              #
#    Updated: 2022/06/08 21:06:50 by adriouic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02 

SRC = src/Fixed.cpp src/main.cpp src/Operators.cpp 

OBJ = ${SRC:%.cpp=%.o}

FLAGS = -Wall -Werror -Wextra

COMPILER = c++

STANDARD = -std=c++98

all: $(NAME)

%.o:%.cpp
	$(COMPILER) -c $(FLAGS) $(STANDARD) $< -o $@

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) $(STANDARD) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all


