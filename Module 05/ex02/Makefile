NAME = ex02 

SRC =   src/ShrubberyCreationForm.cpp src/main.cpp\
       	ex01/src/Form.cpp ex01/ex00/src/Bureaucrat.cpp\
	src/RobotomyRequestForm.cpp

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
	rm -rf *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

