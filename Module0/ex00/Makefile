CC = g++
CFLAGS = -Wall -Wextra -Werror
CPP_VERSION = -std=c++98
NAME = megaphone


SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=%.o)

NAME: $(OBJS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) $(OBJS) -o $(NAME)
	@echo "Compiled"

all: $(NAME)


%.o: $(SRCS)
	@$(CC) $(CFLAGS) $(CPP_VERSION) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	clear

