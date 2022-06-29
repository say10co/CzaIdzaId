NAME = ex03 

SRC = src/Intern.cpp src/main.cpp ex02/src/PresidentialPardonForm.cpp ex02/src/RobotomyRequestForm.cpp ex02/src/ShrubberyCreationForm.cpp ex02/ex01/src/Form.cpp ex02/ex01/ex00/src/Bureaucrat.cpp

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

