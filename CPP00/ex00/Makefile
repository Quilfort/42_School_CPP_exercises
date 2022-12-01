NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
INC = - I
SRC = megaphone.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(INC) $(FLAGS) -c $< -o $@

#clean:
#	@echo "Cleaning up .o files"
#	@rm -f $(OBJ)

#fclean: clean
#	@echo "Delete ./philo"
#	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re