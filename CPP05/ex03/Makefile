NAME = FormIntern
CC = c++
FLAGS = -Wall -Wextra -Werror
FLAGSPP = -std=c++98
HEADER = -I ./include
SRC =	./Src/main.cpp \
		./Src/Bureaucrat.cpp \
		./Src/Form.cpp \
		./Src/ShrubberyCreationForm.cpp \
		./Src/RobotomyRequestForm.cpp \
		./Src/PresidentialPardonForm.cpp \
		./Src/Intern.cpp
		
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(HEADER) $(FLAGSPP) -c $< -o $@

clean:
	@echo "Cleaning up .o files"
	@rm -f $(OBJ)
	@echo "Cleaning Shrubbery File"
	@rm -f *_shrubbery


fclean: clean
	@echo "Delete ./FormIntern"
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re