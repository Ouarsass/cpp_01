# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 14:05:19 by mouarsas          #+#    #+#              #
#    Updated: 2023/01/17 18:34:40 by mouarsas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
SRCS =  Zombie.cpp \
		randomChump.cpp \
		newZombie.cpp \
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