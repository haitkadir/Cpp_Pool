# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 19:13:32 by haitkadi          #+#    #+#              #
#    Updated: 2022/11/13 21:14:49 by haitkadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = g++

CFLAGS = -Wall -Wextra -Werror

CPP_VERSION = -std=c++98

NAME = phonebook


SRCS = main.cpp contact.cpp phonebook.cpp output_data.cpp

HEADERS = phonebook.hpp contact.hpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled\n"

all: $(NAME)

%.o:%.cpp $(SRCS)  $(HEADERS)
	$(CC) $(CFLAGS) $(CPP_VERSION) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

re: fclean all
