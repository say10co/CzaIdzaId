
NAME = ex02 

ex01_SRC = ex01/ex00/src/AAnimal.cpp ex01/ex00/src/Cat.cpp ex01/ex00/src/Dog.cpp ex01/ex00/src/WrongAnimal.cpp ex01/ex00/src/WrongCat.cpp

SRC =  src/main.cpp src/Brain.cpp

OBJ = ${SRC:%.cpp=%.o} ${ex01_SRC:%.cpp=%.o}

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

