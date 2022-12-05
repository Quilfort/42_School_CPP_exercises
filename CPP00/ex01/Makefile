NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
INC = -I PhoneBook.hpp
SRC = PhoneBook.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(INC) -c $< -o $@

clean:
	@echo "Cleaning up .o files"
	@rm -f $(OBJ)

fclean: clean
	@echo "Delete ./phonebook"
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re