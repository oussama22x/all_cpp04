NAME=Animal
SRC =  main.cpp cat.cpp Dog.cpp AAnimal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ=$(SRC:.cpp=.o)
cc=g++
CPPFLAGS =  -std=c++98

all:$(NAME)

$(NAME): $(OBJ)
	$(cc) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	rm $(OBJ)
fclean: clean
	rm  $(NAME)
re: fclean all