# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:11:26 by iecharak          #+#    #+#              #
#    Updated: 2023/11/15 16:12:27 by iecharak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ) whatever.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all