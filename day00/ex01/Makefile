NAME = phonebook 

SRC = PhoneBook.cpp iomanipulator.cpp

FLAGS = -Wall -Werror -Wextra

COMPILER = c++

STANDARD = -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(COMPILER) $(FLAGS) $(STANDARD) $(SRC) -fsanitize=address  -o $@

clean:
	rm -rf $(NAME)

re: clean all

