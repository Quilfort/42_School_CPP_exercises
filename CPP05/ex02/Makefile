NAME = allForms
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
HEADER = -I ./include
SRC =	./Src/main.cpp \
		./Src/Bureaucrat.cpp \
		./Src/AForm.cpp \
		./Src/ShrubberyCreationForm.cpp \
		./Src/RobotomyRequestForm.cpp \
		./Src/PresidentialPardonForm.cpp
		
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
	@echo "Delete ./allForms"
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re