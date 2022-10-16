.PHONY: all clean fclean re

CC = g++

CFLAGS = -Wall -Wextra -Werror

CPP_VERSION = -std=c++98

NAME = phonebook


SRCS = main.cpp contact.cpp phonebook.cpp

OBJS = $(SRCS:%.cpp=%.o)

NAME: $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled\n"

all: $(NAME)


%.o:%.c $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) -c $< -o $@
	@echo "Object created\n"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

re: fclean all
