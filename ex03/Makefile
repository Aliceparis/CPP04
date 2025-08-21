NAME = materia

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = Amateria.cpp\
	Cure.cpp\
	Ice.cpp\
	ICharacter.cpp\
	main.cpp\
	MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re 