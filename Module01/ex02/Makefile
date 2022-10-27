# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haitkadi <haitkadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 15:33:00 by haitkadi          #+#    #+#              #
#    Updated: 2022/10/26 15:33:01 by haitkadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = g++

CFLAGS = -Wall -Wextra -Werror

CPP_VERSION = -std=c++98

NAME = brain


SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled!. Use\033[0;32m ./$(NAME)\033[0m\n"

all: $(NAME)

%.o:%.cpp $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) -c $< -o $@
	@echo "$< ==> $@"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

re: fclean all
