.PHONY: all clean fclean re
CC = g++
CFLAGS = -Wall -Wextra -Werror
CPP_VERSION = -std=c++98
NAME = phonebook


SRCS = phonebook.cpp main.cpp
OBJS = $(SRCS:%.cpp=%.o)

NAME: $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled"

all: $(NAME)


%.o: $(SRCS) phonebook.hpp
	@$(CC) $(CFLAGS) $(CPP_VERSION) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear
re: fclean all
