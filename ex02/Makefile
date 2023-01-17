NAME = ThisIsBrain

SRC  = 	main.cpp\

OBJ = 	main.o\
	
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : ${SRC}
	c++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all