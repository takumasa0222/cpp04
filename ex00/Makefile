# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamatsuu <tamatsuu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 00:43:14 by tamatsuu          #+#    #+#              #
#    Updated: 2025/10/25 03:19:33 by tamatsuu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = c++
INCLUDES = -I ./
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS    =   main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp
OBJS    = $(SRCS:.cpp=.o)
LIBDIR  = 
LIBS    = 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBDIR) $(LIBS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 