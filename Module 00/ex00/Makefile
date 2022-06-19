# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adriouic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 01:02:58 by adriouic          #+#    #+#              #
#    Updated: 2022/05/20 01:03:02 by adriouic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Werror -Wextra 

COMPILER = c++

STANDARD = -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(COMPILER) $(FLAGS) $(STANDARD) $(SRC) -o $@

clean:
	rm -rf $(NAME)

re: clean all
