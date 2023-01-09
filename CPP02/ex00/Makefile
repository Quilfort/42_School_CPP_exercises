NAME = fixed
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
SRC =	main.cpp \
		Fixed.cpp
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
	@echo "Delete ./fixed"
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re