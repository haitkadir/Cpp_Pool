# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haitkadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 19:13:32 by haitkadi          #+#    #+#              #
#    Updated: 2022/10/18 19:13:34 by haitkadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = g++

CFLAGS = -Wall -Wextra -Werror

CPP_VERSION = -std=c++98

NAME = account


SRCS = Account.cpp tests.cpp

HEADERS = Account.hpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled\n"

all: $(NAME)

%.o:%.c $(SRCS)
	$(CC) $(CFLAGS) $(CPP_VERSION) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

re: fclean all
