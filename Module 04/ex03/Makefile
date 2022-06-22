
NAME =  ex03

SRC = src/AMateria.cpp src/Character.cpp src/Cure.cpp src/ICharacter.cpp src/IMateriaSource.cpp src/Ice.cpp src/MateriaSource.cpp  src/main.cpp 

OBJ = ${SRC:%.cpp=%.o}

FLAGS = -Wall -Werror -Wextra #-fsanitize=address

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

