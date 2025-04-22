NAME = ex02
SRC = Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
CPP = c++ -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:cpp=o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(CPP) -c $< -o $@
.PHONY: all clean fclean re
