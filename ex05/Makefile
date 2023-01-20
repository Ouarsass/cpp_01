NAME = Harl

SRCS =	main.cpp \
		Harl.cpp 
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	c++
OBJS	=	$(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)
all :	$(NAME)
%.o : %.cpp Harl.hpp
		$(CC) $(CFLAGS) -o $@ -c $<
clean	:
		rm -f $(OBJS)
fclean	:	clean
		rm -f $(NAME)
re	: 	fclean $(NAME)
.PHONY:	all clean fclean re