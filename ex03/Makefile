NAME=Animal
SRC =  AMateria.cpp  Character.cpp trash.cpp Cure.cpp Ice.cpp  main.cpp  MateriaSource.cpp
OBJ=$(SRC:.cpp=.o)
CXX=c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm  -f $(NAME)
re: fclean all