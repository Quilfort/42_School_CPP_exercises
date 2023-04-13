NAME = convert
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
HEADER = -I ./include
SRC =	./Src/main.cpp \
		./Src/ScalarConverter.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(HEADER) $(FLAGSPP) -c $< -o $@

clean:
	@echo "Cleaning up .o files"
	@rm -f $(OBJ)


fclean: clean
	@echo "Delete ./convert"
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re