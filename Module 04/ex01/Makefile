
NAME = ex01 

EX00_SRC = ex00/src/Animal.cpp ex00/src/Cat.cpp ex00/src/Dog.cpp ex00/src/WrongAnimal.cpp ex00/src/WrongCat.cpp

SRC =  src/main.cpp src/Brain.cpp

OBJ = ${SRC:%.cpp=%.o} ${EX00_SRC:%.cpp=%.o}

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

