
NAME = ex03 

SRC = src/DiamondTrap.cpp  src/main.cpp FragTrap/src/FragTrap.cpp ScavTrap/src/ScavTrap.cpp ClapTrap/src/Claptrap.cpp 

OBJ = ${SRC:%.cpp=%.o}

FLAGS = -Wall -Werror -Wextra #-Wshadow-all

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

