NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
INC = - I
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(FLAGSPP) -c $< -o $@

clean:
	@echo "Cleaning up .o files"
	@rm -f $(OBJ)

fclean: clean
	@echo "Delete ./megaphone"
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re