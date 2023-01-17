NAME = zombieHorde
SRCS =  Zombie.cpp \
		zombieHorde.cpp \
		main.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp Zombie.hpp
		$(CC) $(CFLAGS) -o $@ -c $<
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re