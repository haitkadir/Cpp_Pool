.PHONY: all clean fclean re

CC = c++

CFLAGS = -Wall -Wextra -Werror -g

CPP_VERSION = -std=c++98

NAME = PmergeMe


SRCS = main.cpp PmergeMe.cpp DPmergeMe.cpp

HEADERS = PmergeMe.hpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled!. Use\033[0;32m ./$(NAME)\033[0m\n"

all: $(NAME)

%.o:%.cpp $(HEADERS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) -c $< -o $@
	@echo "$< ==> $@"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

re: fclean all

