NAME = phonebook 

SRC = src/PhoneBook.cpp src/iomanipulator.cpp src/Contact.cpp

FLAGS = -Wall -Werror -Wextra

COMPILER = c++

STANDARD = -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(COMPILER) $(FLAGS) $(STANDARD) $(SRC)  -o $@

clean:
	rm -rf $(NAME)

re: clean all

