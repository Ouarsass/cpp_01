NAME = Human

SRCS =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	c++
OBJS	=	$(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)
all :	$(NAME)
%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
		$(CC) $(CFLAGS) -o $@ -c $<
clean	:
		rm -f $(OBJS)
fclean	:	clean
		rm -f $(NAME)
re	: 	fclean $(NAME)
